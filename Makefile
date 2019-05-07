CC=g++
CFLAGS=-Wall -std=c++0x -fpic

PYTHON_LIBRARIES := -lpython2.7 -lboost_python
INLCUDES := -I/usr/include/python2.7/ -I/usr/include/
LIB_DIRS := -L/usr/lib
LIBS := -lpython2.7 -lboost_python


all: main

FILENAME :=hello
PYTHON_LIBNAME := hello_ext

main: boost/single_file
	cd boost/single_file; $(MAKE)

class: boost/class
	cd boost/class; $(MAKE)

clean:
	-rm *.so
	-rm *.o
