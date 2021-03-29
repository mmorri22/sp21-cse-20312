# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 24312 - Lecture 07

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Variables for Folders
INC := include
SRC := src
OBJ := obj
EXE := exe


# Command: make IrishTest
# Base class for First Inheritance Example
IrishTestObjs := $(OBJ)/IrishTest.o $(OBJ)/Irish.o 

IrishTest: $(IrishTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/IrishTest $(IrishTestObjs)
	$(EXE)/./IrishTest

$(OBJ)/IrishTest.o: $(SRC)/IrishTest.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/IrishTest.cpp -o $@

$(OBJ)/Irish.o: $(SRC)/Irish.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Irish.cpp -o $@



# Command: make Inherit 
# Derived Classes for First Inheritance Example 
InheritObjs := $(OBJ)/Inherit.o $(OBJ)/Faculty.o $(OBJ)/Student.o $(OBJ)/Irish.o

Inherit: $(InheritObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Inherit $(InheritObjs)
	$(EXE)/./Inherit

# Inherit.cpp class both derived classes
$(OBJ)/Inherit.o: $(SRC)/Inherit.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Inherit.cpp -o $@

# Faculty inherits Irish
$(OBJ)/Faculty.o: $(SRC)/Faculty.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Faculty.cpp -o $@

# Student inherits Irish
$(OBJ)/Student.o: $(SRC)/Student.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Student.cpp -o $@

# Irish.o is already created in the Base Class
	


# Command: make Inherit2
# Example of this object in Inheritance Example 
Inherit2Objs := $(OBJ)/Inherit2.o $(OBJ)/Faculty.o $(OBJ)/Student.o $(OBJ)/Irish.o

Inherit2: $(Inherit2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Inherit2 $(Inherit2Objs)
	$(EXE)/./Inherit2

# Inherit.cpp class both derived classes
$(OBJ)/Inherit2.o: $(SRC)/Inherit2.cpp $(INC)/Student.h $(INC)/Faculty.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Inherit2.cpp -o $@

# Irish.o, Student.o, and Faculty.o are already created in make Inherit



# Run the ArithTree Solution
# Command: make ArithTree

$(OBJ)/ArithTree.o: $(SRC)/ArithTree.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/ArithTree.cpp -o $@

$(OBJ)/AddNode.o: $(SRC)/AddNode.cpp $(INC)/AddNode.h
	$(PP) $(CXXFLAGS) -c $(SRC)/AddNode.cpp -o $@
	
$(OBJ)/SubNode.o: $(SRC)/SubNode.cpp $(INC)/SubNode.h
	$(PP) $(CXXFLAGS) -c $(SRC)/SubNode.cpp -o $@
	
$(OBJ)/MultNode.o: $(SRC)/MultNode.cpp $(INC)/MultNode.h
	$(PP) $(CXXFLAGS) -c $(SRC)/MultNode.cpp -o $@
	
$(OBJ)/DivNode.o: $(SRC)/DivNode.cpp $(INC)/DivNode.h
	$(PP) $(CXXFLAGS) -c $(SRC)/DivNode.cpp -o $@
	
$(OBJ)/BinNode.o: $(SRC)/BinNode.cpp $(INC)/BinNode.h
	$(PP) $(CXXFLAGS) -c $(SRC)/BinNode.cpp -o $@

$(OBJ)/NumNode.o: $(SRC)/NumNode.cpp $(INC)/NumNode.h
	$(PP) $(CXXFLAGS) -c $(SRC)/NumNode.cpp -o $@

# Arithmetic Tree Object List
ArithTreeObjs := $(OBJ)/ArithTree.o $(OBJ)/AddNode.o $(OBJ)/SubNode.o $(OBJ)/MultNode.o $(OBJ)/DivNode.o $(OBJ)/BinNode.o $(OBJ)/NumNode.o

# Develop and Run the Executable
ArithTree: $(ArithTreeObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/ArithTree $(ArithTreeObjs)
	$(EXE)/./ArithTree


# Make all
all: IrishTest Inherit Inherit2 ArithTree


# make initialize
# Will be called by grader to initialize your objects and executables folders

initialize: 
	mkdir objects executables

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
