# This is the Makefile for the CSE 20312 course - Lab 09

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


# Command: make MaxPathSum
# Calculated the Max Path Sum of a BST
MaxPathSumObjs := $(OBJ)/MaxPathSum.o 

MaxPathSum: $(MaxPathSumObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/MaxPathSum $(MaxPathSumObjs)
	$(EXE)/./MaxPathSum

$(OBJ)/MaxPathSum.o: $(SRC)/MaxPathSum.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/MaxPathSum.cpp -o $@



# Make all
all: MaxPathSum


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir $(OBJ) $(EXE)


# Make clean
clean :
	rm -rf $(OBJ)/* $(EXE)/*
