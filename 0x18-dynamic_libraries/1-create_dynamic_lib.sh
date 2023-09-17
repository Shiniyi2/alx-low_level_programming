#!/bin/bash
gcc -fPIC -c *.c
gcc -shatre *.o -o liball.so
