# substrait-extensions

Packages Substrait extensions files, along with associated tests and dialects.

Provides [datamodel-code-generator](https://github.com/koxudaxi/datamodel-code-generator) bindings to extensions and dialects.

## Contents

- `substrait_extensions.extensions` — Substrait extension YAML files (functions, types, type variations) and generated bindings.
- `substrait_extensions.dialects` — Substrait dialect files bindings
- `substrait_extensions.testcases` — Substrait function test case files.
- `substrait_extensions.examples` — example extension and type YAML files from the
  specification's documentation, under `examples.extensions` and `examples.types`.
  These are illustrations, not catalog entries: their URNs use the
  `extension:org.example:` owner, and they carry no compatibility guarantee. They
  are useful as fixtures for testing an extension parser.

## Usage

```python
from importlib.resources import files

# Access extension files
arithmetic_extensions = files("substrait_extensions.extensions").joinpath("functions_arithmetic.yaml").read_text()
extension_schema_file = files("substrait_extensions.extensions").joinpath("simple_extensions_schema.yaml").read_text()

# Access example files (fixtures; not catalog entries)
distance_example = files("substrait_extensions.examples.extensions").joinpath("distance_functions.yaml").read_text()

# Access dialect files
dialect_schema_file = files("substrait_extensions.dialects").joinpath("dialect_schema.yaml").read_text()

# Use generated datamodesl
from substrait_extensions.dialects.dialect import Dialect.datamodel.dialect import Dialect
from substrait_extensions.extensions.simple_extensions import SimpleExtensions
```
