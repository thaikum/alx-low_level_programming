#!/bin/bash
gcc -c *.c

ar rcs liball.a $(ls | grep '\.o')
ranlib liball.a
