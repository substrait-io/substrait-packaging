# substrait-antlr

Generated Rust [ANTLR](https://www.antlr.org/) parsers for the
[Substrait](https://substrait.io/) grammars, built against the
[`antlr4rust`](https://docs.rs/antlr4rust) runtime.

The grammars from which the code is generated can be found
[here](https://github.com/substrait-io/substrait/tree/main/grammar).

Versions of this crate correspond to Substrait
[releases](https://github.com/substrait-io/substrait/releases). `vx.y.z` of
`substrait-antlr` contains code generated from `vx.y.z` of the
[substrait repository](https://github.com/substrait-io/substrait).

## Usage

```rust
use antlr4rust::common_token_stream::CommonTokenStream;
use antlr4rust::InputStream;
use substrait_antlr::substrait_type::{SubstraitTypeLexer, SubstraitTypeParser};

let lexer = SubstraitTypeLexer::new(InputStream::new("list?<i32>"));
let tokens = CommonTokenStream::new(lexer);
let mut parser = SubstraitTypeParser::new(tokens);
let tree = parser.startRule().unwrap();
```

- `substrait_type` — lexer/parser/listeners for the Substrait type grammar
  (`SubstraitType.g4`).
- `func_test_case` — lexer/parser/listeners for the function test case grammar
  (`FuncTestCaseParser.g4`).

## Generation and Publishing

Code generation and publishing is handled in the
[substrait-packaging](https://github.com/substrait-io/substrait-packaging)
repository.

Unlike the other Substrait Rust crates, the ANTLR parsers are **committed** to
the repository, because regenerating them requires a forked ANTLR build (the
Rust target is not yet part of upstream ANTLR) and Java, neither of which is a
cargo build dependency.

When a new version of the Substrait specification is released, automation
regenerates the parsers for that version and pushes them to GitHub with a tag
formatted like `rust/substrait-antlr/vx.y.z`. The automation then publishes that
crate to [crates.io](https://crates.io/crates/substrait-antlr).

### Local Generation

The `generate_antlr.sh` script can be executed locally to regenerate the
parsers. It downloads the forked ANTLR JAR and requires `java`. Set
`SUBSTRAIT_HOME` to a directory containing the Substrait specification (defaults
to `../../substrait`).
