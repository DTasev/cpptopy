all: main
main:
	$(MAKE) clean
	swig -Wall -python -c++ example.i

	g++ -std=c++17 -O3 -fpic -c example.cpp example_wrap.cxx -I/usr/include/python2.7/ -I/home/dtasev/dev/cpptopy/libs

	g++ -shared example.o example_wrap.o -o _example.so -L/home/dtasev/dev/cpptopy/libs -Wl,-rpath=/home/dtasev/dev/cpptopy/libs -llodepng

	python run.py

clean:
	-rm *.pyc
	-rm *.so
	-rm *.o