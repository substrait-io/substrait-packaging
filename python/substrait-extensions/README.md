# substrait-extensions

Packages Substrait extensions files, along with associated tests and dialects.

Provides [datamodel-code-generator](https://github.com/koxudaxi/datamodel-code-generator) bindings to extensions and dialects.

## Contents

- `substrait_extensions.extensions` — Substrait extension YAML files (functions, types, type variations) and generated bindings.
- `substrait_extensions.dialects` — Substrait dialect files bindings
- `substrait_extensions.testcases` — Substrait function test case files.

## Usage

```python
from importlib.resources import files

# Access extension files
arithmetic_extensions = files("substrait_extensions.extensions").joinpath("functions_arithmetic.yaml").read_text()
extension_schema_file = files("substrait_extensions.extensions").joinpath("simple_extensions_schema.yaml").read_text()

# Access dialect files
dialect_schema_file = files("substrait_extensions.dialects").joinpath("dialect_schema.yaml").read_text()

# Use generated datamodesl
from substrait_extensions.dialects.dialect import Dialect.datamodel.dialect import Dialect
from substrait_extensions.extensions.simple_extensions import SimpleExtensions
```
