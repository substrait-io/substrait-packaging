#!/usr/bin/env sh
set -eu

buf generate "${SUBSTRAIT_HOME:-../../substrait}/proto"
