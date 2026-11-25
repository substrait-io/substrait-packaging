// SPDX-License-Identifier: Apache-2.0

// Smoke tests for the generated Substrait protobuf bindings. They only use the
// builder and accessor API, so they run under both builds:
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
	a, err := anypb.New(&substraitpb.Type{})
	if err != nil {
		t.Fatal(err)
	}
	if got, want := a.GetTypeUrl(), "type.googleapis.com/substrait.Type"; got != want {
		t.Errorf("type URL = %q, want %q", got, want)
	}

	a, err = anypb.New(&extensions.SimpleExtensionDeclaration{})
	if err != nil {
		t.Fatal(err)
	}
	if got, want := a.GetTypeUrl(), "type.googleapis.com/substrait.extensions.SimpleExtensionDeclaration"; got != want {
		t.Errorf("type URL = %q, want %q", got, want)
	}
}

func TestExternalMessage(t *testing.T) {
	em := testprotos.ExternalMessage_builder{
		Literal: substraitpb.Expression_Literal_builder{
			I64:      proto.Int64(42),
			Nullable: true,
		}.Build(),
		Typ: substraitpb.Type_builder{
			Fp64: substraitpb.Type_FP64_builder{
				Nullability: substraitpb.Type_NULLABILITY_NULLABLE,
			}.Build(),
		}.Build(),
	}.Build()

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
}
