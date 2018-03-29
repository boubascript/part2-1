CXXFLAGS=-std=c++14

main: main.o test-ascii.o
				g++ -o main main.o test-ascii.o


debug: CXXFLAGS:=$(CXXFLAGS) -g
debug:main

main.o: main.cpp test-ascii.h
				g++ $(CXXFLAGS) -c main.cpp

numbers.o: test-ascii.cpp test-ascii.h
				g++ $(CXXFLAGS) -c test-ascii.cpp
clean:
				rm -f main.o test-ascii.o tests.o main tests
