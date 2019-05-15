/* example.i */
%module example
%{
#include "example.h"
%}

%include "std_string.i"

%include "std_vector.i"
namespace std {
   %template(IntVector) vector<int>;
   %template(UCharVector) vector<unsigned char>;
};

%include "myimage.h"
%include "example.h"

