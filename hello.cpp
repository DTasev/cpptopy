#include <boost/python.hpp>
char const* greet()
{
   return "hello, world";
}

using namespace boost::python;

BOOST_PYTHON_MODULE(hello_ext)
{
    using namespace boost::python;
    def("greet", greet);
}