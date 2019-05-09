all: main

boost-single-file: boost/single_file
	cd boost/single_file; $(MAKE)

boost-class: boost/class
	cd boost/class; $(MAKE)

sip: sip/sip
	cd sip/sip; python configure.py; make

clean:
	-rm *.so
	-rm *.o
