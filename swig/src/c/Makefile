all: main
main:
	swig -python example.i
	gcc -fpic -c example.c example_wrap.c -I/usr/include/python2.7/
	gcc -shared example.o example_wrap.o -o _example.so
	# ld -shared example.o example_wrap.o -o _example.so