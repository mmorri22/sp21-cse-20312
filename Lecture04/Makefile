# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for Lecture 04

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

# Folder Variables
INC := inc
SRC := src
OBJ := obj
EXE := exe

# Make initialize - Create the objects and executables

initialize:
	rm -rf $(OBJ) $(EXE)
	mkdir $(OBJ) $(EXE)


# typedef Example
# Command: make typedef

$(OBJ)/typedef.o: $(SRC)/typedef.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/typedef.cpp -o $@

typedefObjs :=  $(OBJ)/typedef.o

typedef: $(typedefObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/typedef $(typedefObjs)
	$(EXE)/./typedef



# point_example Example
# Command: make point_example

$(OBJ)/point.o: $(SRC)/point.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/point.cpp -o $@

$(OBJ)/point_example.o: $(SRC)/point_example.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/point_example.cpp -o $@

point_exampleObjs :=  $(OBJ)/point.o $(OBJ)/point_example.o

point_example: $(point_exampleObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/point_example $(point_exampleObjs)
	$(EXE)/./point_example



# point_bad Example
# Contains a deliberate compiler error
# Command: make point_bad

$(OBJ)/point_bad.o: $(SRC)/point_bad.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/point_bad.cpp -o $@

point_badObjs :=  $(OBJ)/point.o $(OBJ)/point_bad.o

point_bad: $(point_badObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/point_bad $(point_badObjs)
	$(EXE)/./point_bad



# line_example Example
# Command: make line_example

# Object File Creation

# NOTE: No need to create anothter $(OBJ)/point.o since we have one above

$(OBJ)/line.o: $(SRC)/line.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/line.cpp -o $@

$(OBJ)/line_example.o: $(SRC)/line_example.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/line_example.cpp -o $@

# Object File List
line_exampleObjs := $(OBJ)/point.o $(OBJ)/line.o $(OBJ)/line_example.o

line_example: $(line_exampleObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/line_example $(line_exampleObjs)
	$(EXE)/./line_example
	

# namespace Example
# Command: make namespace
namespaceObjs :=  namespace.o

namespace: namespace.o
	$(PP) $(CXXFLAGS) -o namespace $(namespaceObjs)
	./namespace

namespace.o: namespace.cpp
	$(PP) $(CXXFLAGS) -c namespace.cpp
	
	
	
# nameGood Example
# Command: make nameGood
nameGoodObjs :=  nameGood.o

nameGood: nameGood.o
	$(PP) $(CXXFLAGS) -o nameGood $(nameGoodObjs)
	./nameGood

nameGood.o: nameGood.cpp
	$(PP) $(CXXFLAGS) -c nameGood.cpp


# nameGood2 Example
# Command: make nameGood2
nameGood2Objs :=  nameGood2.o

nameGood2: nameGood2.o
	$(PP) $(CXXFLAGS) -o nameGood2 $(nameGood2Objs)
	./nameGood2

nameGood2.o: nameGood2.cpp
	$(PP) $(CXXFLAGS) -c nameGood2.cpp
	
	
# cin Example
# Command: make cin
cinObjs := cin.o

cin: $(cinObjs)
	$(PP) $(CXXFLAGS) -o cin $(cinObjs)
	./cin

cin.o: cin.cpp
	$(PP) $(CXXFLAGS) -c cin.cpp


# cinStr Example
# Command: make cinStr

cinStrObjs := cinStr.o

cinStr: $(cinStrObjs)
	$(PP) $(CXXFLAGS) -o cinStr $(cinStrObjs)
	./cinStr

cinStr.o: cinStr.cpp
	$(PP) $(CXXFLAGS) -c cinStr.cpp



# getline Example
# Command: make getline
getlineObjs :=  getline.o

getline: getline.o
	$(PP) $(CXXFLAGS) -o getline $(getlineObjs)
	./getline

getline.o: getline.cpp
	$(PP) $(CXXFLAGS) -c getline.cpp	


# const Example
# Command: make const
constObjs :=  $(OBJ)/const.o

const: $(constObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/const $(constObjs)
	$(EXE)/./const

$(OBJ)/const.o: $(SRC)/const.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/const.cpp -o $@



# funcOver Example
# Command: make funcOver
funcOverObjs :=  $(OBJ)/funcOver.o

funcOver: $(funcOverObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/funcOver $(funcOverObjs)
	$(EXE)/./funcOver

$(OBJ)/funcOver.o: $(SRC)/funcOver.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/funcOver.cpp -o $@


# ambig Example
# Command: make ambig
ambigObjs :=  $(OBJ)/ambig.o

ambig: $(ambigObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/ambig $(ambigObjs)
	$(EXE)/./ambig

$(OBJ)/ambig.o: $(SRC)/ambig.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/ambig.cpp -o $@


# ambig2 Example
# Command: make ambig
ambig2Objs :=  $(OBJ)/ambig2.o

ambig2: $(ambig2Objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/ambig2 $(ambig2Objs)
	$(EXE)/./ambig2

$(OBJ)/ambig2.o: $(SRC)/ambig2.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/ambig2.cpp -o $@	



# ambig2Fix Example
# Command: make ambig2Fix
ambig2FixObjs :=  $(OBJ)/ambig2Fix.o

ambig2Fix: $(ambig2FixObjs)
	$(PP) $(CXXFLAGS) -o $(EXE)/ambig2Fix $(ambig2FixObjs)
	$(EXE)/./ambig2Fix

$(OBJ)/ambig2Fix.o: $(SRC)/ambig2Fix.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/ambig2Fix.cpp -o $@	
	

# Make all 
all: typedef

# Make clean
clean :
	rm -rf $(OBJ)/* $(EXE)/* *.o
