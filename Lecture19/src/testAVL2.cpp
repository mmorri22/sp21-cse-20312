#include "../inc/AVLTree.h"
#include <iostream>
#include <cstdlib>
#include <fstream>

#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream

template< class T >
void testInsert( AVLTree<T>& theTree, const T& theValue ){
	
	COUT << "Inserting " << theValue << "...\n"; 
	
	theTree.Insert( theValue );
	COUT << theTree << ENDL << ENDL;
}


int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob4.txt" );
	
	// Initialize the Tree
	AVLTree< int > theTree;
	
	testInsert( theTree, 15 );	testInsert( theTree, 10 );	testInsert( theTree, 6 );
	testInsert( theTree, 25 );	testInsert( theTree, 30 );	testInsert( theTree, 12 );
	testInsert( theTree, 5 );	testInsert( theTree, 4 );	testInsert( theTree, 3 );
	
	// Test Inherited Containts
	COUT << "Testing contains '12' : " << theTree.contains(12) << ENDL;
	COUT << "Testing contains '25' : " << theTree.contains(25) << ENDL;
	COUT << "Testing contains '40' : " << theTree.contains(40) << ENDL;	
	COUT << "Testing contains '30' : " << theTree.contains(30) << ENDL;		
	COUT << "Testing contains '-30' : " << theTree.contains(-30) << ENDL;
	COUT << "Testing contains '15' : " << theTree.contains(15) << ENDL << ENDL;
	
	// Test Inherited findMin
	COUT << "Minimum Value is: " << theTree.findMin()->data << ENDL;
	
	// Test Inherited findMax 
	COUT << "Maximum Value is: " << theTree.findMax()->data << ENDL << ENDL;

	file_out << "Student successfully answered Problem 4 correctly in class." << ENDL;
	COUT << "35/35 towards Lecture 19 assignment" << ENDL;

	// Close the file 
	file_out.close();		
	
	return 0;	
	
}