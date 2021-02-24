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
	mkdir $(OBJ) $(EXE)
	
# Clean
clean:
	rm -rf $(OBJ)/* $(EXE)/*


#####################################################
# make addr_test
# Initial Address Test
$(OBJ)/addr.o: $(SRC)/addr.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/addr.cpp -o $@
	
$(OBJ)/addr_test.o: $(SRC)/addr_test.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/addr_test.cpp -o $@
	
# Object List
addr_objs := $(OBJ)/addr_test.o $(OBJ)/addr.o

# Executable
addr_test: $(addr_objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/addr_test $(addr_objs)