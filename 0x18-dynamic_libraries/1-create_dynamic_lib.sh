#!/bin/bash
gcc -c -Werror -Wall -Wextra -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o

