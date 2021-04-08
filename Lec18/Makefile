# This is the Makefile for the CSE 20312 course - Lecture 18

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


# Command: make Prob1
# DFS Review
Prob1Objs := $(OBJ)/Prob1.o 

Prob1: $(Prob1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob1 $(Prob1Objs)
	$(EXE)/./Prob1

$(OBJ)/Prob1.o: $(SRC)/Prob1.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob1.cpp -o $@



# Command: make Prob2
# Topological Sort Review
Prob2Objs := $(OBJ)/Prob2.o 

Prob2: $(Prob2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob2 $(Prob2Objs)
	$(EXE)/./Prob2

$(OBJ)/Prob2.o: $(SRC)/Prob2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob2.cpp -o $@


# Command: make testBSTNode1
# Initial Examples of BSTNode
testBSTNode1Objs := $(OBJ)/testBSTNode1.o 

testBSTNode1: $(testBSTNode1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBSTNode1 $(testBSTNode1Objs)
	$(EXE)/./testBSTNode1

$(OBJ)/testBSTNode1.o: $(SRC)/testBSTNode1.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testBSTNode1.cpp -o $@


# Command: make testBSTNode2
# Examples of BSTNode with Deliberate Segmentation Fault
testBSTNode2Objs := $(OBJ)/testBSTNode2.o 

testBSTNode2: $(testBSTNode2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBSTNode2 $(testBSTNode2Objs)
	$(EXE)/./testBSTNode2

$(OBJ)/testBSTNode2.o: $(SRC)/testBSTNode2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testBSTNode2.cpp -o $@


# Command: make testBSTNode3
# Examples of BSTNode with Deliberate Memory Map
testBSTNode3Objs := $(OBJ)/testBSTNode3.o 

testBSTNode3: $(testBSTNode3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBSTNode3 $(testBSTNode3Objs)
	$(EXE)/./testBSTNode3

$(OBJ)/testBSTNode3.o: $(SRC)/testBSTNode3.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testBSTNode3.cpp -o $@	


# Command: make testBSTNode4
# Examples of BSTNode with Deliberate Memory Map - Printing Addresses
testBSTNode4Objs := $(OBJ)/testBSTNode4.o 

testBSTNode4: $(testBSTNode4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBSTNode4 $(testBSTNode4Objs)
	$(EXE)/./testBSTNode4

$(OBJ)/testBSTNode4.o: $(SRC)/testBSTNode4.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testBSTNode4.cpp -o $@	


# Command: make testBST1
# In-order and Pre-Order
testBST1Objs := $(OBJ)/testBST1.o 

testBST1: $(testBST1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST1 $(testBST1Objs)
	$(EXE)/./testBST1

$(OBJ)/testBST1.o: $(SRC)/testBST1.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testBST1.cpp -o $@	


# Command: make Prob5
# Pre-Order Traversal
Prob5Objs := $(OBJ)/Prob5.o 

Prob5: $(Prob5Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob5 $(Prob5Objs)
	$(EXE)/./Prob5

$(OBJ)/Prob5.o: $(SRC)/Prob5.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob5.cpp -o $@
	
	
# Command: make Prob6
# Post-Order Traversal
Prob6Objs := $(OBJ)/Prob6.o 

Prob6: $(Prob6Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob6 $(Prob6Objs)
	$(EXE)/./Prob6

$(OBJ)/Prob6.o: $(SRC)/Prob6.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob6.cpp -o $@


# Command: make testBST2
# Level-Order Traversal
testBST2Objs := $(OBJ)/testBST2.o 

testBST2: $(testBST2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST2 $(testBST2Objs)
	$(EXE)/./testBST2

$(OBJ)/testBST2.o: $(SRC)/testBST2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testBST2.cpp -o $@	


# Command: make testBST3
# Contains, findMin, and findMax
testBST3Objs := $(OBJ)/testBST3.o 

testBST3: $(testBST3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testBST3 $(testBST3Objs)
	$(EXE)/./testBST3

$(OBJ)/testBST3.o: $(SRC)/testBST3.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/testBST3.cpp -o $@	

# Make all
all: testBSTNode1 testBSTNode2 testBSTNode3 testBSTNode4 testBST1 testBST2 testBST3


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir $(OBJ) $(EXE)


# Make clean
clean :
	rm -rf $(OBJ)/* $(EXE)/*
