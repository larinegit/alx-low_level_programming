#!/bin/bash
gcc -o *.c -fpic && gcc *.c -shared -o liball.so
