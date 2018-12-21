#!/bin/bash

rm -rf *.o lib*

g++ -Wall -g -O0 -fPIC -I../staticLib -c shlib.c
g++ -shared shlib.o -L../staticLib -lsingleton \
	-Wl,--version-script=versionScript \
	-Wl,-soname,libfirst.so.1 -o libfirst.so.1.0.0
ldconfig -n .
ln -s libfirst.so.1 libfirst.so

