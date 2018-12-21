#!/bin/bash

gcc -Wall -fPIC -g -O0 -c shlib.c
gcc -shared -fPIC shlib.o -Wl,-soname,libsecond.so.1 -o libsecond.so.1.0.0
ldconfig -n .
ln -s libsecond.so.1 libsecond.so 
