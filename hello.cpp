char const* greet()
{
   return "hello, world";
}

#include <boost/python.hpp>
using namespace boost::python;

BOOST_PYTHON_MODULE(hello_ext)
{
    using namespace boost::python;
    def("greet", greet);
}