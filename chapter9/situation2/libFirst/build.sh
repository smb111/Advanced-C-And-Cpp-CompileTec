#!/bin/bash

gcc -Wall -fPIC -g -O0 -c shlib.c
gcc -shared -fPIC shlib.o -Wl,-soname,libfirst.so.1 -o libfirst.so.1.0.0
ldconfig -n .
ln -s libfirst.so.1 libfirst.so 
