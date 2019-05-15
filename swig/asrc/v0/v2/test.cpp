#include "test.h"

Moo::Moo(){
m_N = 0;
m_double = 0.0;
}
Moo::Moo(int N){
m_N = N;
m_double = 0.0;
}

int Moo::getValue(){
 return m_N;
}

double Moo::getDouble(){
return m_double;
}

void Moo::setDouble(double value){
m_double = value;
}
