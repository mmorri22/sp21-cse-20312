# This is the Makefile for the CSE 20312 course - Lecture 19

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


# Command: make testBST3
# Contains, findMin, and findMax
testBST3Objs := $(OBJ)/testBST3.o 

testBST3: $(testBST3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST3 $(testBST3Objs)
	$(EXE)/./testBST3

$(OBJ)/testBST3.o: $(SRC)/testBST3.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testBST3.cpp -o $@
	
	
# Command: make testBST4
# remove method
testBST4Objs := $(OBJ)/testBST4.o 

testBST4: $(testBST4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST4 $(testBST4Objs)
	$(EXE)/./testBST4

$(OBJ)/testBST4.o: $(SRC)/testBST4.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testBST4.cpp -o $@	


# Command: make Prob2
# Final BST problem
Prob2Objs := $(OBJ)/Prob2.o 

Prob2: $(Prob2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob2 $(Prob2Objs)
	$(EXE)/./Prob2

$(OBJ)/Prob2.o: $(SRC)/Prob2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob2.cpp -o $@


# Command: make testAVL1
# Initial set up for AVL Tree
testAVL1Objs := $(OBJ)/testAVL1.o 

testAVL1: $(testAVL1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testAVL1 $(testAVL1Objs)
	$(EXE)/./testAVL1

$(OBJ)/testAVL1.o: $(SRC)/testAVL1.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testAVL1.cpp -o $@


# Command: make Prob3
# AVL Tree problem
Prob3Objs := $(OBJ)/Prob3.o 

Prob3: $(Prob3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob3 $(Prob3Objs)
	$(EXE)/./Prob3

$(OBJ)/Prob3.o: $(SRC)/Prob3.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob3.cpp -o $@
	
	
# Command: make testAVL2
# Testing rotations on AVL Tree
# Problem 4 completion here
testAVL2Objs := $(OBJ)/testAVL2.o 

testAVL2: $(testAVL2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testAVL2 $(testAVL2Objs)
	$(EXE)/./testAVL2

$(OBJ)/testAVL2.o: $(SRC)/testAVL2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testAVL2.cpp -o $@	


# Make all
all: testBST3 testBST4 Prob1 Prob3 testAVL1 testAVL2


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir $(OBJ) $(EXE)


# Make clean
clean :
	rm -rf $(OBJ)/* $(EXE)/*
