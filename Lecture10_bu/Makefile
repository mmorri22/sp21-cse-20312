# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for the CSE 20312 course Lecture 05 - Part 1
# 
# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course 
FLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)


# Factorial Example
# Command: make fact
factObjs := fact.o

fact: $(factObjs)
	$(PP) $(CXXFLAGS) -o fact $(factObjs)
	./fact

fact.o: fact.cpp
	$(PP) $(CXXFLAGS) -c fact.cpp

	
	
# Fibonacci Example
# Command: make fib
fibObjs := fib.o

fib: $(fibObjs)
	$(PP) $(CXXFLAGS) -o fib $(fibObjs)

fib.o: fib.cpp
	$(PP) $(CXXFLAGS) -c fib.cpp



# Fibonacci Example - Memoization
# Command: make fibMemo
fibMemoObjs := fibMemo.o

fibMemo: $(fibMemoObjs)
	$(PP) $(CXXFLAGS) -o fibMemo $(fibMemoObjs)

fibMemo.o: fibMemo.cpp
	$(PP) $(CXXFLAGS) -c fibMemo.cpp


# Step Counter Problem Example
# Command: make steps
stepsObjs := steps.o

steps: $(stepsObjs)
	$(PP) $(CXXFLAGS) -o steps $(stepsObjs)

steps.o: steps.cpp
	$(PP) $(CXXFLAGS) -c steps.cpp
	

# Make all
all: exp1 exp2 exp fib fibMemo steps

# Make clean
clean :
	rm -rf *.o exp1 exp2 exp fib fibMemo steps