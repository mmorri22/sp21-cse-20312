# Author: Matthew Morrison
# E-mail: matt.morrison@nd.edu
#
# This is the Makefile for CSE 20312 - Spring 2021 - Lecture 16

# G++ is for the GCC compiler for C++
PP := g++

# CFLAGS are the compiler flages for when we compile C code in this course
FLAGS := -O0 -g -Wall
CXXFLAGS := -m64 -std=c++11 $(FLAGS)
PQCFLAGS := -O0 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror -lm
PQCXX    := -m64 -std=c++11 -Weffc++ $(PQCFLAGS)



# Towers of Hanoi Example
# Command: make hanoi
hanoiObjs :=  hanoi.o

hanoi: hanoi.o
	$(PP) $(PQCXX) -o hanoi $(hanoiObjs)

hanoi.o: hanoi.cpp Tower.h
	$(PP) $(PQCXX) -c hanoi.cpp	
	
	
	
# std::set Example
# Command: make treeTest
treeTestObjs :=  treeTest.o

treeTest: treeTest.o
	$(PP) $(PQCXX) -o treeTest $(treeTestObjs)

treeTest.o: treeTest.cpp
	$(PP) $(PQCXX) -c treeTest.cpp	



# Accumulate Example
# Command: make accumulate
accumulateObjs :=  accumulate.o

accumulate: accumulate.o
	$(PP) $(PQCXX) -o accumulate $(accumulateObjs)

accumulate.o: accumulate.cpp
	$(PP) $(PQCXX) -c accumulate.cpp		



# Sort Example
# Command: make sort
sortObjs :=  sort.o

sort: sort.o
	$(PP) $(PQCXX) -o sort $(sortObjs)

sort.o: sort.cpp
	$(PP) $(PQCXX) -c sort.cpp


# Copy Example
# Command: make copy
copyObjs :=  copy.o

copy: copy.o
	$(PP) $(PQCXX) -o copy $(copyObjs)

copy.o: copy.cpp
	$(PP) $(PQCXX) -c copy.cpp



# Copy Example - Deliberate Segmentation Fault
# Command: make copyBad
copyBadObjs :=  copyBad.o

copyBad: copyBad.o
	$(PP) $(PQCXX) -o copyBad $(copyBadObjs)

copyBad.o: copyBad.cpp
	$(PP) $(PQCXX) -c copyBad.cpp


# Copy Example between files
# Command: make copy_file
copy_fileObjs :=  copy_file.o

copy_file: copy_file.o
	$(PP) $(PQCXX) -o copy_file $(copy_fileObjs)

copy_file.o: copy_file.cpp
	$(PP) $(PQCXX) -c copy_file.cpp


# Count Example 
# Command: make count
countObjs :=  count.o

count: count.o
	$(PP) $(PQCXX) -o count $(countObjs)

count.o: count.cpp
	$(PP) $(PQCXX) -c count.cpp	



# Make all 
all: accumulate sort copy copyBad count copy_file
 
# Make clean
clean :
	rm -rf *.o accumulate sort copy copyBad count copy_file
