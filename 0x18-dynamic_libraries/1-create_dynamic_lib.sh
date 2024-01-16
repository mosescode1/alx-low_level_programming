#!/usr/bin/bash
gcc -shared -fPIC -o liball.so *c
export LD_LIBARY_PATH=.:$LD_LIBARY_PATH