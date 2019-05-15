#include "png_reader.h"

#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

std::unique_ptr<PNGReader> getReader(const std::string &filename) {
  return std::move(std::make_unique<PNGReader>(filename));
}

namespace py = pybind11;
PYBIND11_MODULE(png_reader, m) {
  py::class_<PNGReader>(m, "PNGReader")
      .def(py::init<std::string>())
      .def_readonly("width", &PNGReader::width)
      .def_readonly("height", &PNGReader::height);
  m.def("getReader", &getReader);
}
