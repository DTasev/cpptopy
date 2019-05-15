#include "someclass.h"

#include <pybind11/pybind11.h>

namespace py = pybind11;
PYBIND11_MODULE(pybindSimpleCPPLib, m) {
  py::class_<SomeCPPClass>(m, "SomeCPPClass")
      .def(py::init<>())
      .def("setX", &SomeCPPClass::setX);
}
