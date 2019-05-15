CXX=g++
CFLAGS=-Wall -std=c++17 -fpic

LOCAL_LIBS := /home/dtasev/dev/cpptopy/libs
INLCUDES := -I/usr/include/python2.7/ -I/usr/include/ -I../../libs/pybind11/include -I$(LOCAL_LIBS)
LIB_DIRS := -L/usr/lib -L$(LOCAL_LIBS)
LIBS := -lpython2.7

all: main

liblodepng:
	cd $(LOCAL_LIBS);	$(MAKE) liblodepng

CLASS_FILENAME := png_reader
CLASS_PYTHON_LIBNAME := png_reader

main: liblodepng
	$(CXX) $(CFLAGS) $(INLCUDES) -c $(CLASS_FILENAME).cpp
	$(CXX) -shared -o $(CLASS_PYTHON_LIBNAME).so $(CLASS_FILENAME).o $(LIB_DIRS) $(LIBS) -Wl,-rpath=$(LOCAL_LIBS) -llodepng
	python run.py

clean:
	-rm *.so
	-rm *.o
