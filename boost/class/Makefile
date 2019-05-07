CC=g++
CFLAGS=-Wall -std=c++0x -fpic

PYTHON_LIBRARIES := -lpython2.7 -lboost_python
INLCUDES := -I/usr/include/python2.7/ -I/usr/include/ -I../../
LIB_DIRS := -L/usr/lib
LIBS := -lpython2.7 -lboost_python

all: main

liblodepng:
	$(CC) $(CFLAGS) $(INLCUDES) -c ../../libs/lodepng.cpp
	$(CC) -shared -o liblodepng.so lodepng.o

CLASS_FILENAME := png_reader
CLASS_PYTHON_LIBNAME := png_reader
PACKAGE_DIR := /home/dtasev/dev/cpptopy/boost/class

main: liblodepng
	$(MAKE) liblodepng
	$(CC) $(CFLAGS) $(INLCUDES) -c $(CLASS_FILENAME).cpp
	$(CC) -shared -o $(CLASS_PYTHON_LIBNAME).so $(CLASS_FILENAME).o $(LIB_DIRS) $(LIBS) -L$(PACKAGE_DIR) -Wl,-rpath=$(PACKAGE_DIR) -llodepng
	python run.py

clean:
	-rm *.so
	-rm *.o
