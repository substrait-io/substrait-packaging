# substrait-yamls

Generated Substrait YAML files and schema code for Python.

## Contents

- `substrait_yamls.extensions` — Substrait extension YAML files (functions, types, type variations)
- `substrait_yamls.schema` — Substrait JSON schema files (`simple_extensions_schema.yaml`, `dialect_schema.yaml`)
- `substrait_yamls.dataclasses` — Python dataclasses generated from the schemas

## Usage

```python
from importlib.resources import files

# Access extension YAML files
yaml_text = files("substrait_yamls.extensions").joinpath("functions_arithmetic.yaml").read_text()

# Access schema files
schema = files("substrait_yamls.schema").joinpath("simple_extensions_schema.yaml").read_text()

# Use generated dataclasses
from substrait_yamls.dataclasses.simple_extensions import SimpleExtensions
from substrait_yamls.dataclasses.dialect import Dialect
```
