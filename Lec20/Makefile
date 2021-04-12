# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 course Lecture 20

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

# Variables for Folders
INC := inc
SRC := src
EXE := exe
OBJ := obj


# Command: make BTreeInClass
# Shows a successful BTree Tree Test
BTreeInClassObjs := $(OBJ)/BTreeInClass.o

BTreeInClass: $(BTreeInClassObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/BTreeInClass $(BTreeInClassObjs)
	$(EXE)/./BTreeInClass

$(OBJ)/BTreeInClass.o: $(SRC)/BTreeInClass.cpp $(INC)/BTree.h
	$(PP) $(CXXFLAGS) -c $(SRC)/BTreeInClass.cpp -o $@
	

# Command: make BTreeTest
# Shows a successful BTree Tree Test
BTreeTestObjs := $(OBJ)/BTreeTest.o

BTreeTest: $(BTreeTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/BTreeTest $(BTreeTestObjs)
	$(EXE)/./BTreeTest

$(OBJ)/BTreeTest.o: $(SRC)/BTreeTest.cpp $(INC)/BTree.h
	$(PP) $(CXXFLAGS) -c $(SRC)/BTreeTest.cpp -o $@



# Command: make Prob1
Prob1Objs := $(OBJ)/Prob1.o

Prob1: $(Prob1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob1 $(Prob1Objs)
	$(EXE)/./Prob1

$(OBJ)/Prob1.o: $(SRC)/Prob1.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob1.cpp -o $@


# Command: make Prob2
Prob2Objs := $(OBJ)/Prob2.o

Prob2: $(Prob2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob2 $(Prob2Objs)
	$(EXE)/./Prob2

$(OBJ)/Prob2.o: $(SRC)/Prob2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob2.cpp -o $@


# Command: make Prob3
Prob3Objs := $(OBJ)/Prob3.o

Prob3: $(Prob3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob3 $(Prob3Objs)
	$(EXE)/./Prob3

$(OBJ)/Prob3.o: $(SRC)/Prob3.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob3.cpp -o $@


# Command: make Prob4
Prob4Objs := $(OBJ)/Prob4.o

Prob4: $(Prob4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob4 $(Prob4Objs)
	$(EXE)/./Prob4

$(OBJ)/Prob4.o: $(SRC)/Prob4.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob4.cpp -o $@


# Command: make StudentDB
# Simple Student Database Example
StudentDBObjs := $(OBJ)/StudentDB.o $(OBJ)/Student.o

StudentDB: $(StudentDBObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/StudentDB $(StudentDBObjs)
	$(EXE)/./StudentDB Students.csv

$(OBJ)/StudentDB.o: $(SRC)/StudentDB.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/StudentDB.cpp -o $@
	
$(OBJ)/Student.o: $(SRC)/Student.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Student.cpp -o $@



# Make all
all: BTreeTest


# Make initialize
initialize :
	mkdir $(OBJ) $(EXE)
	

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
	
	

