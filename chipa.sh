#!/bin/bash
./chipa.out < $1 > chipa.code.c 
gcc -w chipa.code.c LinkedList.c LinkedList.h -o $2
rm chipa.code.c
