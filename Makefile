CC=g++
CFLAGS=-Wall -std=c++0x

PYTHON_LIBRARIES := -lpython2.7 -lboost_python
PYTHON_INCLUDE := -I/usr/include/python2.7/
PYTHON_LIBNAME:=hello_ext
FILENAME:=hello
all: main
# it works pog
main: $(FILENAME).cpp
	$(CC) $(CFLAGS) -fpic -I/usr/include/python2.7/ -I/usr/local/include/ -c $(FILENAME).cpp
	$(CC) -shared -o $(PYTHON_LIBNAME).so $(FILENAME).o -L/usr/lib -L/usr/local/lib -lpython2.7 -lboost_python
	python -c "import $(PYTHON_LIBNAME)"

clean:
	-rm *.so
	make all
