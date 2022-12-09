#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
=======
gcc -c ./*.c
ar -rc liball.a ./*.o
>>>>>>> 158b46f60138d19a0b4f6361ca697ef6709d9aed
