CPP_FLAGS := -std=c++11 -O3 -fpic
all: clean swig pybind11 boost sip test
test:
	python py.py
swig:
	swig -Wall -python -c++ someclass.i

	g++ $(CPP_FLAGS) -c someclass.cpp someclass_wrap.cxx -I/usr/include/python2.7/

	g++ -shared someclass.o someclass_wrap.o -o _swigSimpleCPPLib.so
	python -c "import swigSimpleCPPLib"

pybind11:
	g++ $(CPP_FLAGS) -I/usr/include/python2.7/ -I/home/dtasev/dev/cpptopy/libs/pybind11/include -c someclass_pybind.cpp someclass.cpp

	g++ -shared someclass.o someclass_pybind.o -o pybindSimpleCPPLib.so
	python -c "import pybindSimpleCPPLib"

boost:
	g++ $(CPP_FLAGS) -I/usr/include/python2.7/ -I/home/dtasev/dev/cpptopy/libs/pybind11/include -c someclass_boost.cpp someclass.cpp

	g++ -shared someclass.o someclass_boost.o -o boostSimpleCPPLib.so -L/usr/lib -lboost_python

	python -c "import boostSimpleCPPLib"

sip:
	cd sip_module && python configure.py && make

libsomeclass:
	# Generate libsomeclass.so for sip,
	# so that we can manually link to it
	g++ -std=c++11 -O3 -fpic -c someclass.cpp -o someclass.o
	g++ -shared someclass.o -o libsomeclass.so

clean:
	-rm *.pyc
	-rm *.so
	-rm *.o
