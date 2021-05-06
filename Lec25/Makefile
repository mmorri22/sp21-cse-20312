# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 course Lecture 26

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Variables for Folders
INC := inc
SRC := src
EXE := exe
OBJ := obj

# Command: make setTest
setTestObjs := $(OBJ)/setTest.o

setTest: $(setTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/setTest $(setTestObjs)
	$(EXE)/./setTest

$(OBJ)/setTest.o: $(SRC)/setTest.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/setTest.cpp -o $@



# Command: make mapTest
mapTestObjs := $(OBJ)/mapTest.o

mapTest: $(mapTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/mapTest $(mapTestObjs)
	$(EXE)/./mapTest

$(OBJ)/mapTest.o: $(SRC)/mapTest.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/mapTest.cpp -o $@


# Command: make multiSet
multiSetObjs := $(OBJ)/multiSet.o

multiSet: $(multiSetObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/multiSet $(multiSetObjs)
	$(EXE)/./multiSet

$(OBJ)/multiSet.o: $(SRC)/multiSet.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/multiSet.cpp -o $@


# Command: make setProb2
setProb2Objs := $(OBJ)/setProb2.o

setProb2: $(setProb2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/setProb2 $(setProb2Objs)
	$(EXE)/./setProb2

$(OBJ)/setProb2.o: $(SRC)/setProb2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/setProb2.cpp -o $@



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


# Command: make Prob5
Prob5Objs := $(OBJ)/Prob5.o

Prob5: $(Prob5Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob5 $(Prob5Objs)
	$(EXE)/./Prob5

$(OBJ)/Prob5.o: $(SRC)/Prob5.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob5.cpp -o $@
	

# Command: make testBH
# Tests the Treap Insert Results
testBHObjs := $(OBJ)/testBH.o 

testBH: $(testBHObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBH $(testBHObjs)
	$(EXE)/./testBH

$(OBJ)/testBH.o: $(SRC)/testBH.cpp $(INC)/BinomialHeap.h
	$(PP) $(CXXFLAGS) -c $(SRC)/testBH.cpp -o $@



# Command: make testPQ
# Tests the Treap Insert Results
testPQObjs := $(OBJ)/testPQ.o 

testPQ: $(testPQObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testPQ $(testPQObjs)
	$(EXE)/./testPQ

$(OBJ)/testPQ.o: $(SRC)/testPQ.cpp $(INC)/PriorityQueue.h
	$(PP) $(CXXFLAGS) -c $(SRC)/testPQ.cpp -o $@



# Command: make PriorityTest
# Tests the Treap Insert Results
PriorityTestObjs := $(OBJ)/PriorityTest.o 

PriorityTest: $(PriorityTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/PriorityTest $(PriorityTestObjs)
	$(EXE)/./PriorityTest

$(OBJ)/PriorityTest.o: $(SRC)/PriorityTest.cpp $(INC)/PriorityQueue.h
	$(PP) $(CXXFLAGS) -c $(SRC)/PriorityTest.cpp -o $@
	

# Make all
all: Prob1 Prob2


# Make initialize
initialize :
	mkdir $(OBJ) $(EXE)
	

# Make clean
clean :
	rm -rf $(OBJ)/* $(EXE)/*
	
	

