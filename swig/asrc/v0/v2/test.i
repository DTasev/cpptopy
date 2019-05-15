%module test
%{
#include "test.h"
%}

class Moo{
public:
Moo();
Moo(int N);
int getValue();
void setDouble(double value);
double getDouble();
};  




