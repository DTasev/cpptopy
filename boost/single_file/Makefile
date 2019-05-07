CC=g++
CFLAGS=-Wall -std=c++0x -fpic

PYTHON_LIBRARIES := -lpython2.7 -lboost_python
INLCUDES := -I/usr/include/python2.7/ -I/usr/include/
LIB_DIRS := -L/usr/lib
LIBS := -lpython2.7 -lboost_python

all: main

FILENAME := hello
PYTHON_LIBNAME := hello_ext

main: $(FILENAME).cpp
	$(CC) $(CFLAGS) $(INLCUDES) -c $(FILENAME).cpp
	$(CC) -shared -o $(PYTHON_LIBNAME).so $(FILENAME).o $(LIB_DIRS) $(LIBS)
	python run.py

clean:
	-rm *.so
	-rm *.o
