#!/bin/bash
gcc -c *.c -fpic
gcc *.0 -shared -o liball.so

