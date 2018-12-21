#!/bin/bash

gcc -Wall -g -O0 -I../staticLib -I../sharedLib -c main.c
gcc main.o -Wl,-L../staticLib -lstaticlib \
		   -Wl,-L../sharedLib -lshlib \
		   -Wl,-R../sharedLib \ # 仅仅连接符号
		   -o clientApp

