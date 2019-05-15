/* example.i */
%module swigSimpleCPPLib
%{
#include "someclass.h"
%}

%include "someclass.h"

