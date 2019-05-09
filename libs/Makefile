all: main

liblodepng:
	g++ -Wall -std=c++0x -fpic -c lodepng.cpp
	g++ -shared -o liblodepng.so lodepng.o
	-rm lodepng.o

main: liblodepng
	g++ example_decode.cpp -Wl,-rpath=. -L. -llodepng
	./a.out