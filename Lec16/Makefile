# This is the Makefile for the CSE 20312 course Lecture 16

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



# Command: make Prob1
# Initial Examples of Vertex
Prob1Objs := $(OBJ)/Prob1.o 

Prob1: $(Prob1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob1 $(Prob1Objs)
	$(EXE)/./Prob1

$(OBJ)/Prob1.o: $(SRC)/Prob1.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob1.cpp -o $@
	
	

# Command: make DFS
DFSObjs := $(OBJ)/DFS.o 

DFS: $(DFSObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DFS $(DFSObjs)
	$(EXE)/./DFS

$(OBJ)/DFS.o: $(SRC)/DFS.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/DFS.cpp -o $@


# Command: make DFS2
DFS2Objs := $(OBJ)/DFS2.o 

DFS2: $(DFS2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DFS2 $(DFS2Objs)
	$(EXE)/./DFS2

$(OBJ)/DFS2.o: $(SRC)/DFS2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/DFS2.cpp -o $@


# Command: make Prob3
# Topological Sort Search Problem
Prob3Objs := $(OBJ)/Prob3.o 

Prob3: $(Prob3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob3 $(Prob3Objs)
	$(EXE)/./Prob3

$(OBJ)/Prob3.o: $(SRC)/Prob3.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob3.cpp -o $@



# Command: make Prob4
# Breadth-First Search Problem
Prob4Objs := $(OBJ)/Prob4.o 

Prob4: $(Prob4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob4 $(Prob4Objs)
	$(EXE)/./Prob4

$(OBJ)/Prob4.o: $(SRC)/Prob4.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob4.cpp -o $@


# Command: make TopSort
TopSortObjs := $(OBJ)/TopSort.o 

TopSort: $(TopSortObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/TopSort $(TopSortObjs)
	$(EXE)/./TopSort

$(OBJ)/TopSort.o: $(SRC)/TopSort.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/TopSort.cpp -o $@


# Command: make BFS
# Initial Examples of pthreads
BFSObjs := $(OBJ)/BFS.o 

BFS: $(BFSObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/BFS $(BFSObjs)
	$(EXE)/./BFS

$(OBJ)/BFS.o: $(SRC)/BFS.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/BFS.cpp -o $@


# Command: make BFS2
# Initial Examples of pthreads
BFS2Objs := $(OBJ)/BFS2.o 

BFS2: $(BFS2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/BFS2 $(BFS2Objs)
	$(EXE)/./BFS2

$(OBJ)/BFS2.o: $(SRC)/BFS2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/BFS2.cpp -o $@	


# Command: make Prob6
# Minimum Spanning Tree Search Problem
Prob6Objs := $(OBJ)/Prob6.o 

Prob6: $(Prob6Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob6 $(Prob6Objs)
	$(EXE)/./Prob6

$(OBJ)/Prob6.o: $(SRC)/Prob6.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob6.cpp -o $@


# Command: make MST
MSTObjs := $(OBJ)/MST.o 

MST: $(MSTObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/MST $(MSTObjs)
	$(EXE)/./MST

$(OBJ)/MST.o: $(SRC)/MST.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/MST.cpp -o $@


# Command: make MST2
MST2Objs := $(OBJ)/MST2.o 

MST2: $(MST2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/MST2 $(MST2Objs)
	$(EXE)/./MST2

$(OBJ)/MST2.o: $(SRC)/MST2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/MST2.cpp -o $@


# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir $(OBJ) $(EXE)


# Make clean
clean :
	rm -rf $(OBJ)/* $(EXE)/*
