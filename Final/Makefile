# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 course Lecture 22

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


# Command: make Prob6
Prob6Objs := $(OBJ)/Prob6.o

Prob6: $(Prob6Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob6 $(Prob6Objs)
	$(EXE)/./Prob6

$(OBJ)/Prob6.o: $(SRC)/Prob6.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob6.cpp -o $@


# Make all
all: Prob3


# Make initialize
initialize :
	mkdir $(OBJ) $(EXE)
	

# Make clean
clean :
	rm -rf $(OBJ)/* $(EXE)/*
	
	

