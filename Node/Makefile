# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 course Lecture 06 - Build

# G++ is for the GCC compiler for C++
PP := g++


# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


INC := inc
SRC := src
OBJ := obj
EXE := exe


# Make initialize
initialize:
	mkdir $(OBJ) $(EXE)

# Make clean
clean:
	rm -rf $(OBJ)/* $(EXE)/*

	
# Node Test Objects
$(OBJ)/Node_Test.o: $(SRC)/Node_Test.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Node_Test.cpp -o $@
	
# Node Test Object List 
Node_Test_Objs := $(OBJ)/Node_Test.o

# Node Test Executable
Node_Test: $(Node_Test_Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Node_Test $(Node_Test_Objs)
	
	
	
# Node Test Objects
$(OBJ)/Node_Test_Fix.o: $(SRC)/Node_Test_Fix.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Node_Test_Fix.cpp -o $@
	
# Node Test Object List 
Node_Test_Fix_Objs := $(OBJ)/Node_Test_Fix.o

# Node Test Executable
Node_Test_Fix: $(Node_Test_Fix_Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Node_Test_Fix $(Node_Test_Fix_Objs)