#!/bin/bash
gcc -wall -pendantic -werror -wextra -c *.c
ar rcs liball.a *.o
ranlib liball.a
