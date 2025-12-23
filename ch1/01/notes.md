# 1.1 Getting Started

It's important to keep in mind that this book was written in 1988 and this covers
ASNI C. Some things have changed since then, for example: the book examples omits the return type of
main.

As usual the first library included is the so-called stdio.h or (`standard input output`), C programmers
tend to short things up a lot.

the env variable `cc` is not set by default. It's usually a symbolic link to the actual installed compiler
which on most modern Linux distros is GCC (GNU Compiler Collection).

I've changed this on my machine, by exporting the env variable `cc` to something else, such as clang.

if we simply compile our program with cc <program_name.c>, the executable will be called `a.out` by default
on unix based systems, we obviously can change this behavior by setting the `-o` option.

A C program, whatever its size, consists of functions and variables.

Normally we can name functions whatever we want byt `main` is special, it's the entry point of any
C program, this means that every program must have a `main` somewhere.

An escape sequence like `\n` provides a general and extesnible mechanism for representing hard-to-type
or invisible characters.

The first exercise of the book (`Exercise 1-1`), the authors suggest us to experimenting and reading
error messages.

# 1.2 Variables and Arithmetic Expressions
