CC=g++
CFLAGS=-Wall -std=c++0x -fpic

PYTHON_LIBRARIES := -lpython2.7 -lboost_python
INLCUDES := -I/usr/include/python2.7/ -I/usr/include/
LIB_DIRS := -L/usr/lib -L/usr/local/lib
LIBS := -lpython2.7 -lboost_python


all: main

FILENAME :=hello
PYTHON_LIBNAME := hello_ext

main: $(FILENAME).cpp
	$(CC) $(CFLAGS) $(INLCUDES) -c $(FILENAME).cpp
	$(CC) -shared -o $(PYTHON_LIBNAME).so $(FILENAME).o $(LIB_DIRS) $(LIBS)
	python -c "import $(PYTHON_LIBNAME)"

liblodepng: libs/lodepng.cpp
	$(CC) $(CFLAGS) $(INLCUDES) -c libs/lodepng.cpp
	$(CC) -shared -o liblodepng.so lodepng.o

CLASS_FILENAME := klass
CLASS_PYTHON_LIBNAME := klass
klass: $(CLASS_FILENAME).cpp
	$(MAKE) liblodepng
	$(CC) $(CFLAGS) $(INLCUDES) -c $(CLASS_FILENAME).cpp
	$(CC) -shared -o $(CLASS_PYTHON_LIBNAME).so $(CLASS_FILENAME).o $(LIB_DIRS) $(LIBS) -L/home/dtasev/dev/cpptopy/ -Wl,-rpath=/home/dtasev/dev/cpptopy/ -llodepng
	python test_load.py

clean:
	-rm *.so
	-rm *.o
