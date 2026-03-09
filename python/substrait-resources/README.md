# substrait-resources

Packaged Substrait resource files alongside generated bindings

## Contents

- `substrait_resources.extensions` — Substrait extension YAML files (functions, types, type variations)
- `substrait_resources.schemas` — Substrait JSON schema files (`simple_extensions_schema.yaml`, `dialect_schema.yaml`)
- `substrait_resources.datamodel` — Python dataclasses generated from the schemas using [datamodel-code-generator](https://github.com/koxudaxi/datamodel-code-generator)

## Usage

```python
from importlib.resources import files

# Access extension YAML files
yaml_text = files("substrait_resources.extensions").joinpath("functions_arithmetic.yaml").read_text()

# Access schema files
schema = files("substrait_resources.schemas").joinpath("simple_extensions_schema.yaml").read_text()

# Use generated dataclasses
from substrait_resources.datamodel.simple_extensions import SimpleExtensions
from substrait_resources.datamodel.dialect import Dialect
```
