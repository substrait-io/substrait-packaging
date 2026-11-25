// SPDX-License-Identifier: Apache-2.0

//go:build !protoopaque

package tests

import (
	"testing"

	"github.com/substrait-io/substrait-packaging/go/substrait-protobuf/substraitpb"
)

// Smoke tests for the generated Substrait protobuf bindings.
//
// The Hybrid API also exposes exported struct fields (absent under the
// protoopaque build tag). Compiling this is the test.
func TestOpenStructAPI(t *testing.T) {
	_ = &substraitpb.Plan{
		Version: &substraitpb.Version{MinorNumber: 99},
	}
}
