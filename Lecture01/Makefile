# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for Lecture 01 - CSE 20312

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)



# Compilation for the "nothing" program
# Command: make nothing

# Build the Objects
nothing.o: nothing.cpp
	$(PP) $(CXXFLAGS) -c nothing.cpp

# Object variable name
nothingObjs :=  nothing.o

nothing: $(nothingObjs) ; $(PP) $(CXXFLAGS) -o nothing $(nothingObjs)
	./nothing



# C++ Hello, World Example
# Command: make hello
helloObjs :=  hello.o

hello: hello.o
	$(PP) $(CXXFLAGS) -o hello $(helloObjs)
	./hello

hello.o: hello.cpp
	$(PP) $(CXXFLAGS) -c hello.cpp
	
	
# C++ intPtr Example
# Command: make intPtr
intPtrObjs :=  intPtr.o

intPtr: intPtr.o
	$(PP) $(CXXFLAGS) -o intPtr $(intPtrObjs)
	./intPtr

intPtr.o: intPtr.cpp
	$(PP) $(CXXFLAGS) -c intPtr.cpp



# Make all
all: nothing hello intPtr

# Make clean
clean : ; rm -rf *.o nothing hello intPtr
