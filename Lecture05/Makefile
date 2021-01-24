# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 course Lecture 05

# GCC is for the GCC compiler for C
CC := gcc

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Command: make classIntro
# First Example of Classes
classIntroObjs :=  classIntro.o line.o point.o

classIntro: $(classIntroObjs)
	$(PP) $(CXXFLAGS) -o classIntro $(classIntroObjs)

classIntro.o: classIntro.cpp line.h
	$(PP) $(CXXFLAGS) -c classIntro.cpp

line.o: line.cpp line.h
	$(PP) $(CXXFLAGS) -c line.cpp

point.o: point.cpp point.h
	$(PP) $(CXXFLAGS) -c point.cpp



# Command: make advClass
# Advanced Classes with const
advClassesObjs :=  advClasses.o lineAdv.o pointAdv.o

advClasses: $(advClassesObjs)
	$(PP) $(CXXFLAGS) -o advClasses $(advClassesObjs)

advClasses.o: advClasses.cpp lineAdv.h
	$(PP) $(CXXFLAGS) -c advClasses.cpp

lineAdv.o: lineAdv.cpp lineAdv.h
	$(PP) $(CXXFLAGS) -c lineAdv.cpp

pointAdv.o: pointAdv.cpp pointAdv.h
	$(PP) $(CXXFLAGS) -c pointAdv.cpp	
	
	
	
# Command: make ComplexTest
# Example of Overloaded Operators
ComplexTestObjs :=  ComplexTest.o Complex.o

ComplexTest: $(ComplexTestObjs)
	$(PP) $(CXXFLAGS) -o ComplexTest $(ComplexTestObjs)

ComplexTest.o: ComplexTest.cpp Complex.h
	$(PP) $(CXXFLAGS) -c ComplexTest.cpp

Complex.o: Complex.cpp Complex.h
	$(PP) $(CXXFLAGS) -c Complex.cpp



# Make all
all: classIntro advClasses ComplexTest

# Make clean
clean :
	rm -rf *.o classIntro advClasses ComplexTest
