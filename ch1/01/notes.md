# 1.1 Getting Started

It's important to keep in mind that this book was written in 1988 and this covers ASNI C. Some things have changed since then, for example: the book examples omits the return type of
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

The next program uses a formula that converts Fahreneheit's temperatures to Celcius equivalent.
Which is C = (5/9) \* (F - 32)

Unlike ANSI C, comments can know be just two slashs: `//`, and it's no longer necessary to declare
variables on top functions, we can declare them next to where they're being used.
Comments may be used freely to make a program easier to understand.

C compilers do not care about how a program looks (how it's indented), proper identation and spacing
are critical in making programs easy for people to read, the authours recommend writing only one statement per line
(a statement is separated by semicolons) and using blanks around operators, so `x + 2` instead of `x+2` is preferred.

A decimal point in a constant indicates that it is floating point number (1.0) <- floating point 1

If an arithmetic operator has integer operands, an integer operation is performed. If an arithmetic
operator has one floating-point operand and one integer operand, the integer will be converted to floating
point before the operation is done.

for instance:

(fahr - 32), assuming the fahr variable is a floating-point, the 32 would be automatically converted  
to floating point. Writing floating-point constants with explicit decimal points even when they have integral
values emphasizes their floating-point nature for human readers.
(fahr - 32.0)

# 1.3 The for statement

... Nothing to take notes on

# 1.4 Symbolic Constants

It's bad practice to use 'magic numbers', like 300 and 20 in a program because they convey little information
to someone who might have to read the program later, and they are hard to change in a systematic way.

One way to deal with magic numbers is to give them meaningful names.

Example

`#define name replacement`

Any occurrence of `name` will be replaced by the corresponding replacement text.

Those are symbolic constants, not variables, they are just text that gets replaced by the `replacement` expression
at compilation time. Symbolic constant names are conventioanlly written in upper case .
