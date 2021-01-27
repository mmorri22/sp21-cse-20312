#include <iostream>
#include <cstdlib>
#include <vector>

// M x N matrix
#define M 10
#define N 10

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

int main(){
	
	// Brace Initializer Lists
	VECTOR< VECTOR<int> > matrix;
	
	VECTOR<int> line0 = { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 };
	matrix.push_back(line0);
	VECTOR<int> line1 = { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 };
	matrix.push_back(line1);
	VECTOR<int> line2 = { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 };
	matrix.push_back(line2);
	VECTOR<int> line3 = { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 };
	matrix.push_back(line3);
	VECTOR<int> line4 = { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 };
	matrix.push_back(line4);
	VECTOR<int> line5 = { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 };
	matrix.push_back(line5);
	VECTOR<int> line6 = { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 };
	matrix.push_back(line6);
	VECTOR<int> line7 = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 };
	matrix.push_back(line7);
	VECTOR<int> line8 = { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 };
	matrix.push_back(line8);
	VECTOR<int> line9 = { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 };
	matrix.push_back(line9);

	for(long unsigned int iter = 0; iter < matrix.size(); iter++ ){
		
		COUT << "{";
		
		for(long unsigned int jter = 0; jter < N; jter++ ){
			
			COUT << matrix.at(iter).at(jter) << " ";
		}
		
		COUT << "}" << ENDL;
	}

	
	return 0;
	
}