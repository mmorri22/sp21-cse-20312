# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 course Lecture 06

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 


INC := include
SRC := src
OBJECTS := obj
EXE := exe



# Command: make Problem1
# Review Problem for Students

aggr_templateObjs := $(OBJECTS)/aggr_template.o

aggr_template: $(aggr_templateObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/aggr_template $(aggr_templateObjs)
	$(EXE)/./aggr_template

$(OBJECTS)/aggr_template.o: $(SRC)/aggr_template.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/aggr_template.cpp -o $@


# Command: make Problem2 - Big O Procedural
# Review Problem for Students

big_o_procObjs := $(OBJECTS)/big_o_proc.o

big_o_proc: $(big_o_procObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/big_o_proc $(big_o_procObjs)
	$(EXE)/./big_o_proc

$(OBJECTS)/big_o_proc.o: $(SRC)/big_o_proc.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/big_o_proc.cpp -o $@


# Command: make big_o_obj
# Review Problem for Students

big_o_objObjs := $(OBJECTS)/big_o_obj.o

big_o_obj: $(big_o_objObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/big_o_obj $(big_o_objObjs)
	$(EXE)/./big_o_obj

$(OBJECTS)/big_o_obj.o: $(SRC)/big_o_obj.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/big_o_obj.cpp -o $@


# Command: make big_o_stl
# Review Problem for Students

big_o_stlObjs := $(OBJECTS)/big_o_stl.o

big_o_stl: $(big_o_stlObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/big_o_stl $(big_o_stlObjs)
	$(EXE)/./big_o_stl

$(OBJECTS)/big_o_stl.o: $(SRC)/big_o_stl.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/big_o_stl.cpp -o $@
	
	

# Command: make DynArrTest5
# Initial Example of DynArr allocation size and capacity

DynArrTest5Objs := $(OBJECTS)/DynArrTest5.o

DynArrTest5: $(DynArrTest5Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest5 $(DynArrTest5Objs)
	$(EXE)/./DynArrTest5

$(OBJECTS)/DynArrTest5.o: $(SRC)/DynArrTest5.cpp $(INC)/DynArr5.h
	$(PP) $(CXXFLAGS) -c $(SRC)/DynArrTest5.cpp -o $@



# Command: make DynArrTest5Bad
# Shows an example of -Wshadow enforcing strict naming
# Deliberate compiler error

DynArrTest5BadObjs := $(OBJECTS)/DynArrTest5Bad.o

DynArrTest5Bad: $(DynArrTest5BadObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest5Bad $(DynArrTest5BadObjs)
	$(EXE)/./DynArrTest5Bad

$(OBJECTS)/DynArrTest5Bad.o: $(SRC)/DynArrTest5Bad.cpp $(INC)/DynArr5Bad.h
	$(PP) $(CXXFLAGS) -c $(SRC)/DynArrTest5Bad.cpp -o $@


# Command: make DynArrTest6
# Initial Example of DynArr allocation size and capacity

DynArrTest6Objs := $(OBJECTS)/DynArrTest6.o

DynArrTest6: $(DynArrTest6Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest6 $(DynArrTest6Objs)
	$(EXE)/./DynArrTest6

$(OBJECTS)/DynArrTest6.o: $(SRC)/DynArrTest6.cpp $(INC)/DynArr6.h
	$(PP) $(CXXFLAGS) -c $(SRC)/DynArrTest6.cpp -o $@



# Command: make DynArrTest
# Initial Example of DynArr allocation size and capacity

DynArrTestObjs := $(OBJECTS)/DynArrTest.o

DynArrTest: $(DynArrTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest $(DynArrTestObjs)
	$(EXE)/./DynArrTest

$(OBJECTS)/DynArrTest.o: $(SRC)/DynArrTest.cpp $(INC)/DynArr.h
	$(PP) $(CXXFLAGS) -c $(SRC)/DynArrTest.cpp -o $@
	

# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables



# Make all
all: DynArrTest5 DynArrTest6 DynArrTest

# Make clean
clean :
	rm -rf *.o $(OBJECTS)/* $(EXE)/*
