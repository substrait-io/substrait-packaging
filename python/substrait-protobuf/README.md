# substrait-protobuf

Generated Python protobuf bindings for the [Substrait](https://substrait.io/) specification.

The protobuf definitions from which the code is generated can be found [here](https://github.com/substrait-io/substrait/tree/main/proto/substrait).

Versions of this package correspond to Substrait [releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of substrait-protobuf will contain code generated from `vx.y.z` of the [substrait repository](https://github.com/substrait-io/substrait).

## Package Usage
The generated code is available under the `substrait` module:
```python
import substrait.algebra_pb2
import substrait.plan_pb2
import substrait.type_pb2
```

## Generation and Publishing
Code generation and publishing is handled in the [substrait-packaging](https://github.com/substrait-io/substrait-packaging) repository.

When a new version of the Substrait specification is released, automation generates protobuf bindings for that version and pushes them to GitHub with a tag formatted like `python/substrait-protobuf/vx.y.z`. The automation then publishes that code to PyPI.

### Local Generation
The `generate_protobuf.sh` script can be executed locally to check the protobuf generation.

Set `SUBSTRAIT_HOME` to a directory containing the Substrait specification.
