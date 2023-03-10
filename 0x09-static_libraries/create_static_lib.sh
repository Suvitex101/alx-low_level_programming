#!/bin/bash
gcc -Wall -Werror -pedantic -c *.c
ar rc liball.a *.o
