# substrait-antlr

Generated Python [ANTLR](https://www.antlr.org/) bindings for the [Substrait](https://substrait.io/) specification.

The grammar definitions from which the code is generated can be found [here](https://github.com/substrait-io/substrait/tree/main/grammar).

Versions of this package correspond to Substrait [releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of substrait-antlr will contain code generated from `vx.y.z` of the [substrait repository](https://github.com/substrait-io/substrait).

## Package Usage
The generated code is available under the `substrait_antlr` module:
```python
import substrait_antlr.substrait_type.SubstraitTypeParser
import substrait_antlr.func_test_case.FuncTestCaseParser
```

## Generation and Publishing
Code generation and publishing is handled in the [substrait-packaging](https://github.com/substrait-io/substrait-packaging) repository.

When a new version of the Substrait specification is released, automation generates ANTLR bindings for that version and pushes them to GitHub with a tag formatted like `python/substrait-antlr/vx.y.z`. The automation then publishes that code to PyPI.

### Local Generation
The `./generate_antlr.sh` script can be executed locally to check the ANTLR generation.

Set `SUBSTRAIT_HOME` to a directory containing the Substrait specification.
