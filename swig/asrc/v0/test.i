%module test
%{
#include "test.h"
%}
%include "std_vector.i"

%template(VecDouble) std::vector<double>;
%template(mat) std::vector<std::vector<double> >;
struct moo{
        int one;
};  




%include "test.h"
