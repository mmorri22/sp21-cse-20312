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
	

#####################################################
# Step 8 - Makefile with aggregated class
#####################################################
# make student_test
# Initial Student Test
$(OBJ)/student.o: $(SRC)/student.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/student.cpp -o $@
	
$(OBJ)/student_test.o: $(SRC)/student_test.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/student_test.cpp -o $@
	
# Object List
student_test_objs := $(OBJ)/student_test.o $(OBJ)/student.o $(OBJ)/addr.o

# Executable
student_test: $(student_test_objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/student_test $(student_test_objs)
	
	
#####################################################
# Step 10 - Makefile with Node class - template and student
#####################################################
# make node_test
# Initial node_test
$(OBJ)/node_test.o: $(SRC)/node_test.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/node_test.cpp -o $@
	
# Object List
node_test_objs := $(OBJ)/node_test.o $(OBJ)/student.o $(OBJ)/addr.o

# Executable
node_test: $(node_test_objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/node_test $(node_test_objs)
	
	
#####################################################
# Step 12 - Makefile with DLList class - template and student
#####################################################
# make DLList_Test
# Initial DLList_Test
$(OBJ)/DLList_Test.o: $(SRC)/DLList_Test.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/DLList_Test.cpp -o $@
	
# Object List
DLList_Test_objs := $(OBJ)/DLList_Test.o $(OBJ)/student.o $(OBJ)/addr.o

# Executable
DLList_Test: $(DLList_Test_objs)
	$(PP) $(CXXFLAGS) -o $(EXE)/DLList_Test $(DLList_Test_objs)