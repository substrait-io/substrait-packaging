// SPDX-License-Identifier: Apache-2.0

//go:build !protoopaque

package tests

import (
	"testing"

	"google.golang.org/protobuf/proto"

	"github.com/substrait-io/substrait-packaging/go/substrait-protobuf/internal/testprotos"
	"github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb"
)

// Tests for generated Substrait protobuf bindings.
//
// The Hybrid build also exposes the old Open Struct API: exported struct fields
// and oneof wrapper types. These are absent under the `protoopaque` build tag,
// hence the build constraint on this file.

func TestOpenStructAPIMatchesBuilders(t *testing.T) {
	open := &substraitpb.Plan{
		Version: &substraitpb.Version{MinorNumber: 99, Producer: "substrait-packaging"},
	}
	built := substraitpb.Plan_builder{
		Version: substraitpb.Version_builder{MinorNumber: 99, Producer: "substrait-packaging"}.Build(),
	}.Build()

	if !proto.Equal(open, built) {
		t.Errorf("struct literal = %v, builder = %v", open, built)
	}
	if open.Version.Producer != open.GetVersion().GetProducer() {
		t.Error("struct field and accessor disagree")
	}
}

func TestOpenStructAPIExternalMessage(t *testing.T) {
	em := &testprotos.ExternalMessage{
		Literal: &substraitpb.Expression_Literal{
			LiteralType: &substraitpb.Expression_Literal_I64{I64: 42},
			Nullable:    true,
		},
		Typ: &substraitpb.Type{
			Kind: &substraitpb.Type_Fp64{
				Fp64: &substraitpb.Type_FP64{Nullability: substraitpb.Type_NULLABILITY_NULLABLE},
			},
		},
	}

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
