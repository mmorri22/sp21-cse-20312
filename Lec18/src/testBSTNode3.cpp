#include "../inc/BSTNode3.h"
#include <iostream>
#include <fstream>

#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream

/* Problem 4 Starts Here */


int main(){
	
	// Initialize the nodes
	BSTNode< char > node1( 'M' );
	BSTNode< char > node2( 'B' );
	BSTNode< char > node3( 'R' );
	BSTNode< char > node4( 'A' );
	BSTNode< char > node5( 'C' );
	BSTNode< char > node6( 'F' );
	BSTNode< char > node7( 'D' );
	BSTNode< char > node8( 'S' );
	BSTNode< char > node9( 'N' );
	
	// Create a BSTNode pointer for the root 
	BSTNode< char >* root = NULL;
	
	// Insert all five elements 
	insertNode( root, &node1 );
	insertNode( root, &node2 );
	insertNode( root, &node3 );
	insertNode( root, &node4 );
	insertNode( root, &node5 );
	insertNode( root, &node6 );
	insertNode( root, &node7 );
	insertNode( root, &node8 );
	insertNode( root, &node9 );
	
	// Print the in-order traversal
	printTree( root );
	COUT << ENDL << ENDL;
	
	// Create the output stream 
	OFSTREAM file_out( "Prob4.txt" );
	file_out << "Student successfully answered Problem 4 correctly in class." << ENDL;
	file_out << "20/20 towards Lecture 18 assignment" << ENDL;
	// Close the file 
	file_out.close();	
	
	return 0;
}