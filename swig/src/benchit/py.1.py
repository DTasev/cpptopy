import swipSimpleCPPLib
from timeit import timeit


class SomeClass(object):
    def __init__(self):
        self.x = 123123

    def setX(self, new_val):
        self.x = new_val


N = 100
vec = range(N)

someclass = SomeClass()


def test_func():
    for i in xrange(N):
        for j in xrange(N):
            someclass.setX(1)


purePythonTime = timeit('test_func()', 'from __main__ import someclass, test_func', number=1000)
print("Pure Python total time call:", purePythonTime, "Average per call:", purePythonTime/N)


someCPPclass = swipSimpleCPPLib.SomeCPPClass()


def test_cpp_func():
    for i in xrange(N):
        for j in xrange(N):
            someCPPclass.setX(1)


print(timeit('test_cpp_func()', 'from __main__ import someCPPclass, test_cpp_func', number=1000))
