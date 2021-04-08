#include "../inc/BSTNode1.h"
#include <iostream>
#include <fstream>

#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream

int main(){
	
	// Initialize the nodes
	BSTNode< char > node1( 'M' );
	BSTNode< char > node2( 'B' );
	BSTNode< char > node3( 'R' );
	
	// Set the left and right pointers using addresses
	node1.left = &node2;
	node1.right = &node3;
	
	COUT << node1.data << ENDL;
	
	// Must de-reference the pointer to get data
	COUT << node1.left->data << ENDL;
	COUT << node1.right->data << ENDL;
	
	// Create the output stream 
	OFSTREAM file_out( "Prob3.txt" );
	file_out << "Student successfully answered Problem 3 correctly in class." << ENDL;
	file_out << "20/20 towards Lecture 18 assignment" << ENDL;
	// Close the file 
	file_out.close();	
	
	return 0;
}