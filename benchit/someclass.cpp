#include "someclass.h"

void SomeCPPClass::setX(float xx) { /*xx = x;*/
}

void SomeCPPClass::doSetX(int times) {
  for (int i = 0; i < times; ++i) {
    setX(1);
  }
}