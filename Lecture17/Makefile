# This is the Makefile for the CSE 20312 course Lecture 17

# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror 
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS) 

# Variables for Folders
INC := include
SRC := src
EXE := exe
OBJ := obj


# Command: make testVert1
# Initial Examples of Vertex
testVert1Objs := $(OBJ)/testVert1.o 

testVert1: $(testVert1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testVert1 $(testVert1Objs)
	$(EXE)/./testVert1

$(OBJ)/testVert1.o: $(SRC)/testVert1.cpp $(INC)/Vertex1.h
	$(PP) $(CXXFLAGS) -c $(SRC)/testVert1.cpp -o $@



# Command: make testVert2
# Initial Examples of Vertex
testVert2Objs := $(OBJ)/testVert2.o 

testVert2: $(testVert2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testVert2 $(testVert2Objs)
	$(EXE)/./testVert2

$(OBJ)/testVert2.o: $(SRC)/testVert2.cpp $(INC)/Vertex2.h
	$(PP) $(CXXFLAGS) -c $(SRC)/testVert2.cpp -o $@



# Command: make testGraph1
# Initial Examples of Graph
testGraph1Objs := $(OBJ)/testGraph1.o 

testGraph1: $(testGraph1Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testGraph1 $(testGraph1Objs)
	$(EXE)/./testGraph1

$(OBJ)/testGraph1.o: $(SRC)/testGraph1.cpp $(INC)/Graph1.h
	$(PP) $(CXXFLAGS) -c $(SRC)/testGraph1.cpp -o $@



# Command: make Graph
# Initial Examples of pthreads
GraphObjs := $(OBJ)/Graph.o 

Graph: $(GraphObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Graph $(GraphObjs)
	$(EXE)/./Graph

$(OBJ)/Graph.o: $(SRC)/Graph.cpp $(INC)/Graph.h
	$(PP) $(CXXFLAGS) -c $(SRC)/Graph.cpp -o $@



# Command: make testRemove
# Initial Examples of pthreads
testRemoveObjs := $(OBJ)/testRemove.o 

testRemove: $(testRemoveObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/testRemove $(testRemoveObjs)
	$(EXE)/./testRemove

$(OBJ)/testRemove.o: $(SRC)/testRemove.cpp $(INC)/Graph1.h
	$(PP) $(CXXFLAGS) -c $(SRC)/testRemove.cpp -o $@


# Command: make DFS
DFSObjs := $(OBJ)/DFS.o 

DFS: $(DFSObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DFS $(DFSObjs)
	$(EXE)/./DFS

$(OBJ)/DFS.o: $(SRC)/DFS.cpp $(INC)/Graph5.h
	$(PP) $(CXXFLAGS) -c $(SRC)/DFS.cpp -o $@


# Command: make DFS2
DFS2Objs := $(OBJ)/DFS2.o 

DFS2: $(DFS2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DFS2 $(DFS2Objs)
	$(EXE)/./DFS2

$(OBJ)/DFS2.o: $(SRC)/DFS2.cpp $(INC)/Graph5.h
	$(PP) $(CXXFLAGS) -c $(SRC)/DFS2.cpp -o $@
	

# make initialize
# Will be called by grader to initialize your objects and executables folders
initialize: 
	mkdir objects executables


# Make all
all: testVert1 testVert2 testGraph1 Graph


# Make clean
clean :
	rm -rf *.o $(OBJ)/* $(EXE)/*
