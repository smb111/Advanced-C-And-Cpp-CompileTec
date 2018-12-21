#!/bin/bash
# -c 编译阶段也必须加上 位置无关代码的 限制
gcc -Wall -fPIC -g -O0 -I../staticLib -c shlib.c
gcc -shared -fPIC shlib.o -Wl,-soname,libshlib.so.1 -o libshlib.so.1.0.0
ldconfig -n .
ln -s libshlib.so.1 libshlib.so

