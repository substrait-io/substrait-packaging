// SPDX-License-Identifier: Apache-2.0

//! Generated Rust [ANTLR](https://www.antlr.org/) parsers for the
//! [Substrait](https://substrait.io/) grammars, built against the
//! [`antlr4rust`](https://docs.rs/antlr4rust) runtime.
//!
//! The grammars from which this code is generated can be found
//! [here](https://github.com/substrait-io/substrait/tree/main/grammar).
//!
//! - [`substrait_type`] — parser for the Substrait type grammar
//!   (`SubstraitType.g4`).
//! - [`func_test_case`] — parser for the function test case grammar
//!   (`FuncTestCaseParser.g4`).
//!
//! The generated code only works with the exact `antlr4rust` version it was
//! generated for, so that runtime is re-exported as [`antlr4rust`]. Use it
//! through this re-export rather than depending on `antlr4rust` directly, so
//! that the two can never drift apart.

pub use antlr4rust;

pub mod func_test_case;
pub mod substrait_type;
