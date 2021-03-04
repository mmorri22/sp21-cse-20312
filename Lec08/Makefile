# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Folder Variable Names
INC := include
SRC := src
OBJ := obj
EXE := exe

# Initialize
initialize:
	rm -rf $(OBJ) $(EXE)
	mkdir $(OBJ) $(EXE)
	
# Clean
clean:
	rm -rf $(OBJ)/* $(EXE)/*
	
	
#####################################################
# Makefile with DLList class - template and student
#####################################################
# make DLList_Test
# Initial DLList_Test
$(OBJ)/addr.o: $(SRC)/addr.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/addr.cpp -o $@

$(OBJ)/student.o: $(SRC)/student.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/student.cpp -o $@


$(OBJ)/DLList_Test.o: $(SRC)/DLList_Test.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/DLList_Test.cpp -o $@
	
# Object List
DLList_Test_objs := $(OBJ)/DLList_Test.o $(OBJ)/student.o $(OBJ)/addr.o

# Executable
DLList_Test: $(DLList_Test_objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DLList_Test $(DLList_Test_objs)
	
	
#####################################################
# Part 2 - Compiling an advance program
#####################################################
# make DLList_Test
# Initial DLList_Test

# Coding Part 2 starts here
	

#####################################################
# Wrapper Stack Example
#####################################################	
# Command: make wrapperStack
wrapperStack_objs :=  $(OBJ)/wrapperStack.o

wrapperStack: $(wrapperStack_objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/wrapperStack $(wrapperStack_objs)
	$(EXE)/./wrapperStack

$(OBJ)/wrapperStack.o: $(SRC)/wrapperStack.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/wrapperStack.cpp -o $@	
	
	
#####################################################
# Max/Min Stack Problem
#####################################################	
# Command: make max_stack_sol
max_stack_sol_objs :=  $(OBJ)/max_stack_sol.o

max_stack_sol: $(max_stack_sol_objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/max_stack_sol $(max_stack_sol_objs)
	$(EXE)/./max_stack_sol

$(OBJ)/max_stack_sol.o: $(SRC)/max_stack_sol.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/max_stack_sol.cpp -o $@	
	
	
#####################################################
# Towers of Hanoi Compilation
#####################################################
hanoiObjs := $(OBJ)/hanoi.o

hanoi: $(hanoiObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/hanoi $(hanoiObjs)

$(OBJ)/hanoi.o: $(SRC)/hanoi.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/hanoi.cpp -o $@
	
	
#####################################################
# Wrapper Queue Example
#####################################################	
# Command: make wrapperQueue
wrapperQueue_objs :=  $(OBJ)/wrapperQueue.o

wrapperQueue: $(wrapperQueue_objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/wrapperQueue $(wrapperQueue_objs)
	$(EXE)/./wrapperQueue

$(OBJ)/wrapperQueue.o: $(SRC)/wrapperQueue.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/wrapperQueue.cpp -o $@
	

#####################################################
# Shortest Path Example
#####################################################
# Command: make shortestPath
shortestPathObjs :=  $(OBJ)/shortestPath.o

shortestPath: $(shortestPathObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/shortestPath $(shortestPathObjs)
	$(EXE)/./shortestPath

$(OBJ)/shortestPath.o: $(SRC)/shortestPath.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/shortestPath.cpp -o $@
