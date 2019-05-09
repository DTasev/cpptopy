TARGET = png_reader.so
OFILES = sippng_readercmodule.o sippng_readerWorld.o
HFILES = sipAPIpng_reader.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -I. -I/usr/include/python2.7
CFLAGS = -std=c++11 -I/home/dtasev/dev/cpptopy/libs -I/usr/include/x86_64-linux-gnu/qt5/ -I/usr/include/x86_64-linux-gnu/qt5//QtCore -I/usr/include/x86_64-linux-gnu/qt5//QtGui  -g -O2 -fdebug-prefix-map=/build/sip4-6EjBPW/sip4-4.19.7+dfsg=. -fstack-protector-strong -Wformat -Werror=format-security  -Wdate-time -D_FORTIFY_SOURCE=2 -fPIC -Wall -W
CXXFLAGS = -std=c++11 -I/home/dtasev/dev/cpptopy/libs -I/usr/include/x86_64-linux-gnu/qt5/ -I/usr/include/x86_64-linux-gnu/qt5//QtCore -I/usr/include/x86_64-linux-gnu/qt5//QtGui  -g -O2 -fdebug-prefix-map=/build/sip4-6EjBPW/sip4-4.19.7+dfsg=. -fstack-protector-strong -Wformat -Werror=format-security  -Wdate-time -D_FORTIFY_SOURCE=2 -fPIC -Wall -W
LFLAGS =  -Wl,-Bsymbolic-functions -Wl,-z,relro -shared -Wl,-rpath,/home/dtasev/dev/cpptopy/sip/src -Wl,-rpath,/home/dtasev/dev/cpptopy/libs -Wl,--version-script=png_reader.exp
LIBS = -L/home/dtasev/dev/cpptopy/sip/src -L/home/dtasev/dev/cpptopy/libs
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
	@echo '{ global: initpng_reader; local: *; };' > png_reader.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.7/dist-packages || mkdir -p $(DESTDIR)/usr/lib/python2.7/dist-packages
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.7/dist-packages/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f sippng_readercmodule.o
	-rm -f sippng_readerWorld.o
	-rm -f png_reader.exp
