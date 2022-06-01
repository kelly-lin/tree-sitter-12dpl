# tree-sitter-12dpl

Tree sitter grammar for 12dpl/4dpl.

## Installing

Run `npm install`, which will install all depedencies including the tree sitter
cli, which you will need to run the test commands. If you cannot run the 
tree-sitter-cli command in the project directory, make sure that you have
`./node_modules/.bin` added to your `$PATH`. You can do this by adding this line
to your shell environment, `export PATH=$PATH:./node_modules/.bin`.

## Testing

Run `tree-sitter test`. For more information, refer to [tree-sitter test command](https://tree-sitter.github.io/tree-sitter/creating-parsers#command-test)

## Building

```
gcc -o parser.so -shared src/parser.c -Os -I./src
```
