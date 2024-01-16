#!/usr/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -fPIC -o liball.so *.o
export LD_LIBARY_PATH=.:$LD_LIBARY_PATH