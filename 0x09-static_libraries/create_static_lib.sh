#!/bin/bash
for each in $(ls | grep '\.c');
do
    gcc -c $each -o $(echo $each | tr .c .o)
done

ar rc liball.a $(ls | grep '\.o')
ranlib liball.a
