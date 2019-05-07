#include "png_reader.h"

#include <boost/python.hpp>
#include <boost/python/suite/indexing/vector_indexing_suite.hpp>

using namespace boost::python;

BOOST_PYTHON_MODULE(png_reader) {
  class_<std::vector<unsigned char>>("UCharVec")
      .def(vector_indexing_suite<std::vector<unsigned char>>());

  class_<World>("World")
      .def("greet", &World::greet)
      .def("set", &World::set)
      .def("decode", &World::decode);

  class_<PNGReader>("PNGReader", init<std::string>())
      .def_readonly("width", &PNGReader::width)
      .def_readonly("height", &PNGReader::height);
}
