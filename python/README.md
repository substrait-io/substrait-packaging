# Substrait Python Packages

This directory contains multiple Python packages for working with Substrait:

## Packages

- **[substrait-protobuf](./substrait-protobuf)** - Protocol Buffer definitions and utilities
- **[substrait-antlr](./substrait-antlr)** - ANTLR parser and grammar utilities
- **[substrait-extensions](./substrait-extensions)** - Extension definitions and utilities

## Development

Each package can be installed independently:

```bash
# Install a specific package
cd substrait-protobuf
pip install -e ".[dev]"

# Or install all packages in development mode
pip install -e ./substrait-protobuf[dev] -e ./substrait-antlr[dev] -e ./substrait-extensions[dev]
```

## Building

To build distribution packages:

```bash
cd substrait-protobuf
python -m build

cd ../substrait-antlr
python -m build

cd ../substrait-extensions
python -m build
```

## Publishing

To publish to PyPI:

```bash
cd substrait-protobuf
python -m twine upload dist/*

# Repeat for other packages
```

## Testing

Run tests for all packages:

```bash
pytest substrait-protobuf/tests
pytest substrait-antlr/tests
pytest substrait-extensions/tests
```
