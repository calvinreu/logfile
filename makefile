gccV := $(shell gcc -dumpversion)

default: log.hpp log.cpp
	g++ -shared -fPIC log.cpp -o liblog.so
	mv liblog.so /usr/lib
	chmod 0755 /usr/lib/liblog.so
	cp log.hpp /usr/include/c++/$(gccV)
	chmod 0755 /usr/include/c++/$(gccV) log.hpp
	