# substrait-extensions

Packaged Substrait extensions files

## Contents

- `substrait_extensions.extensions` — Substrait extension YAML files (functions, types, type variations)
- `substrait_extensions.schemas` — Substrait JSON schema files (`simple_extensions_schema.yaml`, `dialect_schema.yaml`)
- `substrait_extensions.datamodel` — Python dataclasses generated from the schemas using [datamodel-code-generator](https://github.com/koxudaxi/datamodel-code-generator)

## Usage

```python
from importlib.extensions import files

# Access extension YAML files
yaml_text = files("substrait_extensions.extensions").joinpath("functions_arithmetic.yaml").read_text()

# Access schema files
schema = files("substrait_extensions.schemas").joinpath("simple_extensions_schema.yaml").read_text()

# Use generated dataclasses
from substrait_extensions.datamodel.simple_extensions import SimpleExtensions
from substrait_extensions.datamodel.dialect import Dialect
```
