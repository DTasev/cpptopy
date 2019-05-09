%Module png_reader
%Import QtCore/QtCoremod.sip

class World {
  %TypeHeaderCode
  #include <../src/png_reader.h>
  %End

public:
  void set(const char *msg);
  QString get();
};

