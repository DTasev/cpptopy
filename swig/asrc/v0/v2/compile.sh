#!/bin/bash

#clean
./clean.sh

#compile c code first
g++ -c -fPIC test.cpp

#use SWIG to make an interface
swig -c++ -nodefaultctor -python test.i

#make libraries for python
g++ -c -fPIC test_wrap.cxx  -I/usr/include/python2.7 -I/usr/lib/python2.7

g++ -shared -Wl,-soname,_test.o -o _test.so test.o test_wrap.o

