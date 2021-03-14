# This is the Makefile for the CSE 20312 course - Lab 05

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CFLAGS := -std=c11 $(FLAGS)
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Variables for Folders
INC := inc
SRC := src
EXE := exe
OBJ := obj
	
	
	
# Command: make Prob1
# Solution to Problem 1 from Lab05

$(OBJ)/Prob1.o: $(SRC)/Prob1.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob1.cpp -o $@

Prob1Objs := $(OBJ)/Prob1.o

Prob1: $(Prob1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob1 $(Prob1Objs)
	$(EXE)/./Prob1



# Command: make Prob2
# Solution to Problem 2 from Lab04
Prob2Objs :=  $(OBJ)/Prob2.o

Prob2: $(Prob2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob2 $(Prob2Objs)
	$(EXE)/./Prob2 words.txt

$(OBJ)/Prob2.o: $(SRC)/Prob2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob2.cpp -o $@
	


# make initialize
# Will be called by the script to set up the folders
initialize: 
	mkdir obj exe


# Make all
all: Prob1 Prob2

# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
