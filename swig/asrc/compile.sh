#!/bin/bash

#clean
./clean.sh

#compile c code first
g++ -c -fPIC test.cpp two.cpp
#use SWIG to make an interface
swig -c++ -python test.i
swig -c++ -python two.i

#make libraries for python
g++ -c -fPIC test_wrap.cxx  -I/usr/include/python2.7 -I/usr/lib/python2.7
g++ -c -fPIC two_wrap.cxx  -I/usr/include/python2.7 -I/usr/lib/python2.7

g++ -shared -Wl,-soname,_test.so -o _test.so test.o test_wrap.o
g++ -shared -Wl,-soname,_two.so -o _two.so test.o two_wrap.o

