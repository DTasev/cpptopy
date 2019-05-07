CC=g++
CFLAGS=-Wall -std=c++0x -fpic

PYTHON_LIBRARIES := -lpython2.7 -lboost_python
INLCUDES := -I/usr/include/python2.7/ -I/usr/include/
LIB_DIRS := -L/usr/lib
LIBS := -lpython2.7 -lboost_python


all: main

FILENAME :=hello
PYTHON_LIBNAME := hello_ext

main: single_file
	cd single_file; $(MAKE)

using_class: class
	cd class; $(MAKE)

clean:
	-rm *.so
	-rm *.o
