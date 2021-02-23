PP := g++

FLAGS := -O2 -g -Wall -Wextra -Wconversion -Wshadow -pedantic -Werror
CXXFLAGS := -m64 -std=c++11 -Weffc++ $(FLAGS)

INC := inc
SRC := src
OBJ := obj
EXE := exe

initialize:
	mkdir $(OBJ) $(EXE)
	
clean:
	rm -rf $(OBJ)/* $(EXE)/*


# Object for Node_Test
$(OBJ)/Node_Test.o: $(SRC)/Node_Test.cpp
	$(PP) $(CXXFLAGS) -c $(SRC)/Node_Test.cpp -o $@
	
Node_Test: $(OBJ)/Node_Test.o
	$(PP) $(CXXFLAGS) -o $(EXE)/Node_Test $(OBJ)/Node_Test.o








