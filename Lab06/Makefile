# This is the Makefile for the CSE 20312 course - Optional Lecture 07

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


# Command: make Prob1 - Find Kth Largest
Prob1Objs := $(OBJ)/Prob1.o 

Prob1: $(Prob1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob1 $(Prob1Objs)
	$(EXE)/./Prob1

$(OBJ)/Prob1.o: $(SRC)/Prob1.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob1.cpp -o $@
	
	
# Command: make testMinHeap
SortKListsObjs := $(OBJ)/SortKLists.o 

SortKLists: $(SortKListsObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/SortKLists $(SortKListsObjs)
	$(EXE)/./SortKLists

$(OBJ)/SortKLists.o: $(SRC)/SortKLists.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/SortKLists.cpp -o $@
	


# Command: make FindMedian
FindMedianObjs := $(OBJ)/FindMedian.o 

FindMedian: $(FindMedianObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/FindMedian $(FindMedianObjs)
	$(EXE)/./FindMedian

$(OBJ)/FindMedian.o: $(SRC)/FindMedian.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/FindMedian.cpp -o $@



# Make all
all: SortKLists FindMedian



# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir $(OBJ) $(EXE)
	

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
