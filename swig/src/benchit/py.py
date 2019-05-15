import pybindSimpleCPPLib
import boostSimpleCPPLib
import swigSimpleCPPLib
from timeit import timeit


class SomeClass(object):
    def __init__(self):
        self.x = 123123

    def setX(self, new_val):
        self.x = new_val

# -------------------------------- Pure Python --------------------------------


N = 10000
NN = 1000


def python_bench():
    someclass = SomeClass()

    def test_func():
        for i in xrange(NN):
            someclass.setX(1)

    globals()['someclass'] = someclass
    globals()['test_func'] = test_func

    purePythonTime = timeit('test_func()', 'from __main__ import someclass, test_func', number=N)
    print("Pure Python total time call:", purePythonTime, "Average per call:", purePythonTime/N)


def swig_bench():
    some_swig_cpp_class = swigSimpleCPPLib.SomeCPPClass()

    def test_swig_cpp_func():
        for i in xrange(NN):
            some_swig_cpp_class.setX(1)

    globals()['some_swig_cpp_class'] = some_swig_cpp_class
    globals()['test_swig_cpp_func'] = test_swig_cpp_func

    swigPythonToCPP = timeit('test_swig_cpp_func()',
                             'from __main__ import some_swig_cpp_class, test_swig_cpp_func', number=N)
    print("SWIG total time call:", swigPythonToCPP, "Average per call:", swigPythonToCPP/N)


def pybind11_bench():
    some_pybind_cpp_class = pybindSimpleCPPLib.SomeCPPClass()

    def test_pybind_cpp_func():
        for i in xrange(NN):
            some_pybind_cpp_class.setX(1)

    globals()['some_pybind_cpp_class'] = some_pybind_cpp_class
    globals()['test_pybind_cpp_func'] = test_pybind_cpp_func

    pybindPythonToCPP = timeit('test_pybind_cpp_func()',
                               'from __main__ import some_pybind_cpp_class, test_pybind_cpp_func', number=N)
    print("pybind11 total time call:", pybindPythonToCPP, "Average per call:", pybindPythonToCPP/N)


def boost_bench():
    some_boost_cpp_class = boostSimpleCPPLib.SomeCPPClass()

    def test_boost_cpp_func():
        for i in xrange(NN):
            some_boost_cpp_class.setX(1)

    globals()['some_boost_cpp_class'] = some_boost_cpp_class
    globals()['test_boost_cpp_func'] = test_boost_cpp_func

    boostPythonToCPP = timeit('test_boost_cpp_func()',
                              'from __main__ import some_boost_cpp_class, test_boost_cpp_func', number=N)
    print("boost11 total time call:", boostPythonToCPP, "Average per call:", boostPythonToCPP/N)


python_bench()
swig_bench()
pybind11_bench()
boost_bench()
