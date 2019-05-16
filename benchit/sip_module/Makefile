TARGET = sipSimpleCPPLib.so
OFILES = sipsipSimpleCPPLibcmodule.o sipsipSimpleCPPLibSomeCPPClass.o
HFILES = sipAPIsipSimpleCPPLib.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -I. -I/usr/include/python2.7
CFLAGS = -O3 -std=c++11 -I/usr/include/x86_64-linux-gnu/qt5/ -I/usr/include/x86_64-linux-gnu/qt5//QtCore -DQT_NO_VERSION_TAGGING  -g -O2 -fdebug-prefix-map=/build/sip4-6EjBPW/sip4-4.19.7+dfsg=. -fstack-protector-strong -Wformat -Werror=format-security  -Wdate-time -D_FORTIFY_SOURCE=2 -fPIC -Wall -W
CXXFLAGS = -O3 -std=c++11 -I/usr/include/x86_64-linux-gnu/qt5/ -I/usr/include/x86_64-linux-gnu/qt5//QtCore -DQT_NO_VERSION_TAGGING  -g -O2 -fdebug-prefix-map=/build/sip4-6EjBPW/sip4-4.19.7+dfsg=. -fstack-protector-strong -Wformat -Werror=format-security  -Wdate-time -D_FORTIFY_SOURCE=2 -fPIC -Wall -W
LFLAGS =  -Wl,-Bsymbolic-functions -Wl,-z,relro -shared -Wl,-rpath,/home/dtasev/dev/cpptopy/benchit -Wl,--version-script=sipSimpleCPPLib.exp
LIBS = -L/home/dtasev/dev/cpptopy/benchit -lsomeclass
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: initsipSimpleCPPLib; local: *; };' > sipSimpleCPPLib.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.7/dist-packages || mkdir -p $(DESTDIR)/usr/lib/python2.7/dist-packages
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.7/dist-packages/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f sipsipSimpleCPPLibcmodule.o
	-rm -f sipsipSimpleCPPLibSomeCPPClass.o
	-rm -f sipSimpleCPPLib.exp
