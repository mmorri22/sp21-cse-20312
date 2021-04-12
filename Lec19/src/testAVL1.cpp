#include "../inc/AVLTree1.h"
#include <iostream>
#include <fstream>

#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream

int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob2.txt" );
	
	// Initialize the Tree
	AVLTree< char > theTree;
	
	theTree.Insert( 'M' );
	theTree.Insert( 'B' );
	theTree.Insert( 'D' );
	
	// Use the Copy Constructor
	AVLTree< char > theTree2( theTree );
	
	// Use the Assignment Operator
	AVLTree< char > theTree3 = theTree;	
	
	// Insert Different Elements to Different Trees 
	theTree2.Insert( 'A' );
	theTree3.Insert( 'Z' );
	
	// Print the Trees 
	COUT << "theTree : \n" << theTree << ENDL;
	COUT << "theTree2: \n" << theTree2 << ENDL;
	COUT << "theTree3: \n" << theTree3 << ENDL;
	
	file_out << "Student successfully answered Problem 2 correctly in class." << ENDL;

	// Close the file 
	file_out.close();	
	
	return 0;
}