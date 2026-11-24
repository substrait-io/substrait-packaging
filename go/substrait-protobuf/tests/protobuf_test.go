// SPDX-License-Identifier: Apache-2.0

// Tests for the generated Substrait protobuf bindings.
//
// The module is generated with the Hybrid API, which also ships an Opaque-only
// build behind the `protoopaque` build tag. The tests in this file only use the
// accessor and builder API, so they compile and pass under both builds:
//
//	go test ./...
//	go test -tags protoopaque ./...
package tests

import (
	"testing"

	"google.golang.org/protobuf/proto"
	"google.golang.org/protobuf/types/known/anypb"

	"github.com/substrait-io/substrait-packaging/go/substrait-protobuf/internal/testprotos"
	"github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb"
	"github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb/extensions"
)

func TestTypeURLs(t *testing.T) {
	tests := []struct {
		name string
		msg  proto.Message
		want string
	}{
		{"Type", &substraitpb.Type{}, "type.googleapis.com/substrait.Type"},
		{"Plan", &substraitpb.Plan{}, "type.googleapis.com/substrait.Plan"},
		{"Expression", &substraitpb.Expression{}, "type.googleapis.com/substrait.Expression"},
		// The extensions protos live in the `substrait.extensions` protobuf
		// package even though they are generated into their own Go package.
		{
			"SimpleExtensionDeclaration",
			&extensions.SimpleExtensionDeclaration{},
			"type.googleapis.com/substrait.extensions.SimpleExtensionDeclaration",
		},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			a, err := anypb.New(tt.msg)
			if err != nil {
				t.Fatal(err)
			}
			if got := a.GetTypeUrl(); got != tt.want {
				t.Errorf("type URL = %q, want %q", got, tt.want)
			}
		})
	}
}

func TestPlanRoundTrip(t *testing.T) {
	plan := substraitpb.Plan_builder{
		Version: substraitpb.Version_builder{
			MajorNumber: 0,
			MinorNumber: 99,
			Producer:    "substrait-packaging",
		}.Build(),
	}.Build()

	b, err := proto.Marshal(plan)
	if err != nil {
		t.Fatal(err)
	}
	got := &substraitpb.Plan{}
	if err := proto.Unmarshal(b, got); err != nil {
		t.Fatal(err)
	}
	if !proto.Equal(plan, got) {
		t.Errorf("round-tripped plan = %v, want %v", got, plan)
	}
	if p := got.GetVersion().GetProducer(); p != "substrait-packaging" {
		t.Errorf("producer = %q, want %q", p, "substrait-packaging")
	}
}

func TestAccessors(t *testing.T) {
	plan := &substraitpb.Plan{}
	if plan.HasVersion() {
		t.Fatal("new plan reports a version")
	}

	plan.SetVersion(substraitpb.Version_builder{MinorNumber: 99}.Build())
	if !plan.HasVersion() {
		t.Fatal("version not set")
	}
	if got := plan.GetVersion().GetMinorNumber(); got != 99 {
		t.Errorf("minor number = %d, want 99", got)
	}

	plan.ClearVersion()
	if plan.HasVersion() {
		t.Error("version still set after ClearVersion")
	}
}

func TestExternalMessage(t *testing.T) {
	// A downstream schema (testprotos.proto) importing the Substrait protos
	// round-trips through the types this module ships.
	literal := &substraitpb.Expression_Literal{}
	literal.SetI64(42)
	literal.SetNullable(true)

	typ := &substraitpb.Type{}
	typ.SetFp64(substraitpb.Type_FP64_builder{
		Nullability: substraitpb.Type_NULLABILITY_NULLABLE,
	}.Build())

	em := testprotos.ExternalMessage_builder{Literal: literal, Typ: typ}.Build()

	b, err := proto.Marshal(em)
	if err != nil {
		t.Fatal(err)
	}
	got := &testprotos.ExternalMessage{}
	if err := proto.Unmarshal(b, got); err != nil {
		t.Fatal(err)
	}
	if !proto.Equal(em, got) {
		t.Errorf("round-tripped message = %v, want %v", got, em)
	}
	if v := got.GetLiteral().GetI64(); v != 42 {
		t.Errorf("literal i64 = %d, want 42", v)
	}
	if n := got.GetTyp().GetFp64().GetNullability(); n != substraitpb.Type_NULLABILITY_NULLABLE {
		t.Errorf("fp64 nullability = %v, want %v", n, substraitpb.Type_NULLABILITY_NULLABLE)
	}
}
