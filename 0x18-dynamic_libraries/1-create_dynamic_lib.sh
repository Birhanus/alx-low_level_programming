#!/bin/bash
gcc -fPiC -c *.c
gcc -shared -o liball.so *.o
