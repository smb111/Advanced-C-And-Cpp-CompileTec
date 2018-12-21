#!/bin/bash

g++ -Wall -O0 -g -I../staticLib -I../shlibFirst -I../shlibSecond -c main.c
g++ main.o -L../staticLib -lsingleton \
	-L../shlibFirst -lfirst \
	-L../shlibSecond -lsecond \
	-Wl,-R../shlibFirst \
	-Wl,-R../shlibSecond \
	-o clientApp


