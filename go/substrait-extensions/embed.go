// SPDX-License-Identifier: Apache-2.0

// Package substrait provides access to the Substrait specification's extension
// definitions, text schemas and function test cases via embed.FS.
//
// The package name is "substrait" (not "substraitextensions") so that it is a
// drop-in replacement for the legacy embed module that lived at the root of the
// substrait specification repository: consumers only need to change the import
// path, not their call sites.
package substrait

import "embed"

//go:embed extensions
var extensionsFS embed.FS

//go:embed text
var textFS embed.FS

//go:embed tests/cases
var testsFS embed.FS

// GetSubstraitFS returns an embed.FS containing the Substrait extension
// definition YAML files under the "extensions" directory.
//
// Deprecated: use GetSubstraitExtensionsFS, which is clearer about its
// contents. Retained for compatibility with the legacy embed module.
func GetSubstraitFS() embed.FS { return extensionsFS }

// GetSubstraitExtensionsFS returns an embed.FS containing the Substrait
// extension definition YAML files under the "extensions" directory.
func GetSubstraitExtensionsFS() embed.FS { return extensionsFS }

// GetSubstraitTextFS returns an embed.FS containing the Substrait text schema
// YAML files (e.g. simple_extensions_schema.yaml) under the "text" directory.
func GetSubstraitTextFS() embed.FS { return textFS }

// GetSubstraitTestsFS returns an embed.FS containing the Substrait function
// test case files under the "tests/cases" directory.
func GetSubstraitTestsFS() embed.FS { return testsFS }
