# G++ is for the GCC compiler for C++
PP := g++

# CXXFLAGS are the compiler flages for when we compile C++ code in this course 
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Folder Variable Names
INC := inc
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
# Shortest Path Example
#####################################################
# Command: make shortestPath
shortestPathObjs :=  $(OBJ)/shortestPath.o

shortestPath: $(shortestPathObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/shortestPath $(shortestPathObjs)
	$(EXE)/./shortestPath

$(OBJ)/shortestPath.o: $(SRC)/shortestPath.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/shortestPath.cpp -o $@


#####################################################
# Problem 2
#####################################################
# Command: make Prob2
Prob2Objs :=  $(OBJ)/Prob2.o

Prob2: $(Prob2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob2 $(Prob2Objs)
	$(EXE)/./Prob2

$(OBJ)/Prob2.o: $(SRC)/Prob2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob2.cpp -o $@
	
	
#####################################################
# Problem 3
#####################################################
# Command: make Prob3
Prob3Objs :=  $(OBJ)/Prob3.o

Prob3: $(Prob3Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob3 $(Prob3Objs)
	$(EXE)/./Prob3

$(OBJ)/Prob3.o: $(SRC)/Prob3.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob3.cpp -o $@
	
	
#####################################################
# Problem 4
#####################################################
# Command: make Prob4
Prob4Objs :=  $(OBJ)/Prob4.o

Prob4: $(Prob4Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob4 $(Prob4Objs)
	$(EXE)/./Prob4

$(OBJ)/Prob4.o: $(SRC)/Prob4.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob4.cpp -o $@
	
	
#####################################################
# Problem 5
#####################################################
# Command: make Prob5
Prob5Objs :=  $(OBJ)/Prob5.o

Prob5: $(Prob5Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/Prob5 $(Prob5Objs)
	$(EXE)/./Prob5

$(OBJ)/Prob5.o: $(SRC)/Prob5.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Prob5.cpp -o $@


# Command: make DynArrTest5
# Initial Example of DynArr allocation size and capacity

DynArrTest5Objs := $(OBJ)/DynArrTest5.o

DynArrTest5: $(DynArrTest5Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest5 $(DynArrTest5Objs)
	$(EXE)/./DynArrTest5

$(OBJ)/DynArrTest5.o: $(SRC)/DynArrTest5.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/DynArrTest5.cpp -o $@



# Command: make DynArrTest5Bad
# Shows an example of -Wshadow enforcing strict naming
# Deliberate compiler error

DynArrTest5BadObjs := $(OBJ)/DynArrTest5Bad.o

DynArrTest5Bad: $(DynArrTest5BadObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest5Bad $(DynArrTest5BadObjs)
	$(EXE)/./DynArrTest5Bad

$(OBJ)/DynArrTest5Bad.o: $(SRC)/DynArrTest5Bad.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/DynArrTest5Bad.cpp -o $@


# Command: make DynArrTest6
# Initial Example of DynArr allocation size and capacity

DynArrTest6Objs := $(OBJ)/DynArrTest6.o

DynArrTest6: $(DynArrTest6Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest6 $(DynArrTest6Objs)
	$(EXE)/./DynArrTest6

$(OBJ)/DynArrTest6.o: $(SRC)/DynArrTest6.cpp $(INC)/DynArr6.h
	$(PP) $(CXXFLAGS) -c $(SRC)/DynArrTest6.cpp -o $@
	
	
#####################################################
# DynArrTest
#####################################################
# Command: make DynArrTest
DynArrTestObjs :=  $(OBJ)/DynArrTest.o

DynArrTest: $(DynArrTestObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DynArrTest $(DynArrTestObjs)
	$(EXE)/./DynArrTest

$(OBJ)/DynArrTest.o: $(SRC)/DynArrTest.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/DynArrTest.cpp -o $@