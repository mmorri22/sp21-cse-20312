#include "../inc/BST1.h"
#include <iostream>

#define COUT std::cout
#define ENDL std::endl

int main(){
	
	// Initialize the Tree
	BST< char > theTree;
	
	theTree.Insert( 'M' );
	theTree.Insert( 'B' );
	theTree.Insert( 'D' );
	
	// Use the Copy Constructor
	BST< char > theTree2( theTree );
	
	// Use the Assignment Operator
	BST< char > theTree3 = theTree;	
	
	// Insert Different Elements to Different Trees 
	theTree2.Insert( 'A' );
	theTree3.Insert( 'Z' );
	
	// Print the Trees 
	COUT << "theTree : \n" << theTree << ENDL;
	COUT << "theTree2: \n" << theTree2 << ENDL;
	COUT << "theTree3: \n" << theTree3 << ENDL;
	
	return 0;
}