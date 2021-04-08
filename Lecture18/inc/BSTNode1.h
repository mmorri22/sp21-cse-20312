#ifndef BSTNODE1_H
#define BSTNODE1_H

#include <cstdlib>	// Needed for NULL keyword

template< class T >
struct BSTNode{
	
	// Struct Members
	T     data;
	BSTNode<T>* left;
	BSTNode<T>* right;	
	
	// Default Constructor
	BSTNode() : data(), left(NULL), right(NULL){ }
	
	// Overloaded Constructor
	BSTNode(const T& dataIn) : data(dataIn), left(NULL), right(NULL){ }
	
};

#endif

