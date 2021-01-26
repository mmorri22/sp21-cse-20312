#include <vector>
#include <iostream>

#define COUT std::cout
#define ENDL std::endl

void printArray( std::vector<int>& theArray ){
	
	COUT << "[";
	
	for(unsigned int iter = 0; iter < theArray.size(); iter++){
		
		COUT << theArray[iter];
		
		if( iter < theArray.size() - 1 ){
			
			COUT << ",";
		}
	}
	
	COUT << "]";
	
}

std::vector<int> solveArray( std::vector<int>& theArray ){
	
	// Create an array to store the solution
	std::vector<int> solution( theArray.size() );
	
	// Forward Iteration
	solution[ 0 ] = 1;
	for(unsigned int iter = 1; iter < theArray.size(); iter++){
		
		solution[ iter ] = solution[ iter - 1 ] * theArray[ iter - 1 ];
	
	}
	
	return solution;
}


void runSolution( std::vector<int>& theArray ) {
	
	// Print the Initial Input
	COUT << "Input : ";
	printArray( theArray );
	COUT << "\n";

	// Run the Solution and Print the Output
	COUT << "Output: ";
	std::vector<int> solution = solveArray( theArray );
	printArray( solution );
	COUT << ENDL << ENDL;	
	
}


int main(){
	
	int numVals = 5;
	
	// Create first array
	std::vector<int> array1( numVals );
	
	array1[0] = 1; 	array1[1] = 2;
	array1[2] = 3; 	array1[3] = 4;
	array1[4] = 5;
	
	runSolution(array1);
	
	// Create second array
	
	std::vector<int> array2( numVals - 1 );
	
	array2[0] = 1; 	array2[1] = 2;
	array2[2] = 3; 	array2[3] = 4;
	
	runSolution(array2);
	
	// Create third array 
	
	std::vector<int> array3( numVals + 1);
	
	array3[0] = 22; array3[1] = 18;
	array3[2] = 5; 	array3[3] = 33;
	array3[4] = 9;	array3[5] = 101;
	
	runSolution(array3);
	
	return 0;
}
