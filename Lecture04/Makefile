# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for Lecture 04

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# helloCPP Example
# Command: make helloCPP
helloCPPObjs :=  helloCPP.o

helloCPP: helloCPP.o
	$(PP) $(CXXFLAGS) -o helloCPP $(helloCPPObjs)
	./helloCPP

helloCPP.o: helloCPP.cpp
	$(PP) $(CXXFLAGS) -c helloCPP.cpp
	

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
constObjs :=  const.o

const: const.o
	$(PP) $(CXXFLAGS) -o const $(constObjs)
	./const

const.o: const.cpp
	$(PP) $(CXXFLAGS) -c const.cpp	



# ambig Example
# Command: make ambig
ambigObjs :=  ambig.o

ambig: ambig.o
	$(PP) $(CXXFLAGS) -o ambig $(ambigObjs)
	./ambig

ambig.o: ambig.cpp
	$(PP) $(CXXFLAGS) -c ambig.cpp	


# ambig2 Example
# Command: make ambig
ambig2Objs :=  ambig2.o

ambig2: ambig2.o
	$(PP) $(CXXFLAGS) -o ambig2 $(ambig2Objs)
	./ambig2

ambig2.o: ambig2.cpp
	$(PP) $(CXXFLAGS) -c ambig2.cpp	



# ambig2Fix Example
# Command: make ambig2Fix
ambig2FixObjs :=  ambig2Fix.o

ambig2Fix: ambig2Fix.o
	$(PP) $(CXXFLAGS) -o ambig2Fix $(ambig2FixObjs)
	./ambig2Fix

ambig2Fix.o: ambig2Fix.cpp
	$(PP) $(CXXFLAGS) -c ambig2Fix.cpp	



# template Example
# Command: make template
templateObjs :=  template.o

template: template.o
	$(PP) $(CXXFLAGS) -o template $(templateObjs)
	./template

template.o: template.cpp
	$(PP) $(CXXFLAGS) -c template.cpp	
	

# Make all 
all: nameGood cin cinStr const

# Make clean
clean :
	rm -rf *.o helloCPP namespace nameGood cin cinStr getline const ambig2Fix
