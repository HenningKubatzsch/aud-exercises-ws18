# aud-exercises-ws18
Solutions developed with students during exercises for the course Algorithmen und Datenstrukturen in winter term 2018/19.

Setup and running instructions:

1. Obtain a C-compiler of your choice; I use the Gnu Compiler Collection (gcc).
2. Open a shell and navigate to the directory where the source file is located (using `cd`). You want to use tab-completion! 
3. Compile the program `name.c` by running 
`gcc -ansi -Wall -Wextra -Wpedantic name.c`. 
This will create an executable with the name `a.out`. The compiler flags enforce syntactic restrictions that are very close to the description of C in the official lecture material.
4. To run `a.out` from a unix-like system, type `./a.out`.
5. Alternatively, you may add `-o exename` to create an executable named `exename`. It can be run by typing `./exename`.

