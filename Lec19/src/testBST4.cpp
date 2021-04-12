#include "../inc/BST.h"
#include <iostream>
#include <fstream>
#include <cstdlib>

#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream

template< class T >
void removeBST( BST<T>& theTree, const T& remove_elem ){
	
	theTree.remove( remove_elem );
	COUT << "\nAfter deleting " << remove_elem << ": " << ENDL;
	COUT << "theTree : \n" << theTree << ENDL << ENDL;	
	
}

int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob1.txt" );
	
	// Initialize the Tree
	BST< int > theTree;
	
	theTree.Insert( 15 );	theTree.Insert( 10 );	theTree.Insert( 6 );
	theTree.Insert( 25 );	theTree.Insert( 30 );	theTree.Insert( 12 );
	theTree.Insert( 31 );	theTree.Insert( 17 );	
	
	// Print the Trees 
	COUT << "theTree : \n" << theTree << ENDL << ENDL;
	
	// Remove elements
	removeBST( theTree, 15 );
	removeBST( theTree, 25 );
	removeBST( theTree, 10 );
	removeBST( theTree, 17 );
	removeBST( theTree, 29 );
	removeBST( theTree, 31 );
	removeBST( theTree, 12 );
	removeBST( theTree, 6 );
	removeBST( theTree, 30 );
	removeBST( theTree, 30 );
	
	file_out << "Student successfully answered Problem 1 correctly in class." << ENDL;
	COUT << "35/35 towards Lecture 19 assignment" << ENDL;

	// Close the file 
	file_out.close();	
	
	return 0;	
	
}
