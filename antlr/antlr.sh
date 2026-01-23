#!/bin/sh
ANTLR_PATH="${ANTLR_PATH:-.}"
JAR_PATH="$ANTLR_PATH/antlr-4.13.2-complete.jar"

CLASSPATH="$JAR_PATH:." java -jar $JAR_PATH "$@"