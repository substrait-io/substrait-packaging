// SPDX-License-Identifier: Apache-2.0

package substrait

import (
	"io/fs"
	"testing"
)

func TestEmbeddedExtensions(t *testing.T) {
	entries, err := GetSubstraitExtensionsFS().ReadDir("extensions")
	if err != nil {
		t.Fatal(err)
	}
	if len(entries) == 0 {
		t.Fatal("no embedded extension files found under extensions/")
	}
}

func TestEmbeddedText(t *testing.T) {
	entries, err := GetSubstraitTextFS().ReadDir("text")
	if err != nil {
		t.Fatal(err)
	}
	if len(entries) == 0 {
		t.Fatal("no embedded text schema files found under text/")
	}
}

func TestEmbeddedTests(t *testing.T) {
	var count int
	err := fs.WalkDir(GetSubstraitTestsFS(), "tests/cases", func(_ string, d fs.DirEntry, err error) error {
		if err != nil {
			return err
		}
		if !d.IsDir() {
			count++
		}
		return nil
	})
	if err != nil {
		t.Fatal(err)
	}
	if count == 0 {
		t.Fatal("no embedded test case files found under tests/cases/")
	}
}
