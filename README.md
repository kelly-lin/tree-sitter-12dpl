# tree-sitter-12dpl

Tree sitter grammar for the 12d Programming Language (12dpl).

## Installing

Run `npm install` which will install all dependencies including the tree sitter
cli.

## Executing Tests

Run `tree-sitter test`.

For more information, refer to [tree-sitter test command](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test)

## Building

Build the parser using a C compiler like `gcc`.

```sh
gcc -o parser.so -shared src/parser.c -Os -I./src
```
