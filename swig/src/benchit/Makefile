CPP_FLAGS := -std=c++11 -O3 -fpic
all: clean swig pybind11 boost
swig:
	swig -Wall -python -c++ someclass.i

	g++ $(CPP_FLAGS) -c someclass_swig.cpp someclass_wrap.cxx -I/usr/include/python2.7/

	g++ -shared someclass_swig.o someclass_wrap.o -o _swigSimpleCPPLib.so

pybind11:
	g++ $(CPP_FLAGS) -I/usr/include/python2.7/ -I/home/dtasev/dev/cpptopy/libs/pybind11/include -c someclass_pybind.cpp someclass_swig.cpp

	g++ -shared someclass_swig.o someclass_pybind.o -o pybindSimpleCPPLib.so
	python -c "import pybindSimpleCPPLib"

boost:
	g++ $(CPP_FLAGS) -I/usr/include/python2.7/ -I/home/dtasev/dev/cpptopy/libs/pybind11/include -c someclass_boost.cpp someclass_swig.cpp

	g++ -shared someclass_swig.o someclass_boost.o -o boostSimpleCPPLib.so -L/usr/lib -lboost_python

	python -c "import boostSimpleCPPLib"

clean:
	-rm *.pyc
	-rm *.so
	-rm *.o