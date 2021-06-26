#!/bin/bash
./chipa.out < $1 > chipa.code.c && gcc chipa.code.c -o chipa.ejecutable && rm chipa.code.c
