#include "someclass.h"

#include <boost/python.hpp>
using namespace boost::python;

BOOST_PYTHON_MODULE(boostSimpleCPPLib) {
  class_<SomeCPPClass>("SomeCPPClass").def("setX", &SomeCPPClass::setX);
}
