import pybindSimpleCPPLib
import boostSimpleCPPLib
import swigSimpleCPPLib
from sip_module import sipSimpleCPPLib
from timeit import timeit


class SomeClass(object):
    def __init__(self):
        self.x = 123123

    def setX(self, new_val):
        pass
        # self.x = new_val

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

    time_taken = timeit('test_func()', 'from __main__ import someclass, test_func', number=N)
    print("Pure Python total time call:", time_taken, "Average per call:", time_taken/N)


def bench(klass, name):
    class_instance = klass()

    def test_func():
        for i in xrange(NN):
            class_instance.setX(1)

    globals()['class_instance'] = class_instance
    globals()['test_func'] = test_func

    time_taken = timeit('test_func()',
                        'from __main__ import class_instance, test_func', number=N)
    print("{} total time call:".format(name), time_taken, "Average per call:", time_taken/N)
    time_taken = timeit('class_instance.doSetX(NN)',
                        'from __main__ import class_instance, NN', number=N)
    print("{} CPP internal loop total time:".format(name), time_taken, "Average per call:", time_taken/N)


python_bench()
bench(swigSimpleCPPLib.SomeCPPClass, 'SWIG')
bench(pybindSimpleCPPLib.SomeCPPClass, 'PYBIND11')
bench(boostSimpleCPPLib.SomeCPPClass, 'BOOST')
bench(sipSimpleCPPLib.SomeCPPClass, 'SIP')
