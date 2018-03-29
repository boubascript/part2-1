CXXFLAGS=-std=c++14

#changed main to compile indent.cpp, and related targets 
main: indent.o bad-code.cpp
	g++ -o main indent.o 


debug: CXXFLAGS:=$(CXXFLAGS) -g
debug:main

indent.o: indent.cpp 
	g++ $(CXXFLAGS) -c indent.cpp

# unnecessary target
# numbers.o: test-ascii.cpp test-ascii.h
# 	g++ $(CXXFLAGS) -c test-ascii.cpp


clean:
	rm -f indent.o  main indent a.out
