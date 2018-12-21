#!/bin/bash

g++ -Wall -g -O0 -mcmodel=large -c singleton.cpp
ar -rcs libsingleton.a singleton.o
