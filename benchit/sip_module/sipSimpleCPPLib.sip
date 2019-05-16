%Module sipSimpleCPPLib

%Import QtCore/QtCoremod.sip

struct SomeCPPClass {
  %TypeHeaderCode
  #include <../someclass.h>
  %End

public:
  void setX(float xx);
  void doSetX(int times);
};