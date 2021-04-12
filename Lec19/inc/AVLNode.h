#ifndef AVLNODE_H
#define AVLNODE_H

#include <cstdlib>	// Needed for NULL keyword
#include <iostream>

template< class T >
struct AVLNode {
	
	// Struct Members
	T data;
	int height;
	AVLNode<T>* left;
	AVLNode<T>* right;	
	
	// Default Constructor
	AVLNode() : data(), height(), left(NULL), right(NULL){ }
	
	// Overloaded Constructor
	AVLNode(const T& dataIn) : data(dataIn), height(), left(NULL), right(NULL){ }

	// Destructor
	~AVLNode(){
		if( right != NULL )
			delete right;
		
		if( left != NULL )
			delete left;
	}
	
	// Copy Constructor
	AVLNode(const AVLNode<T>& copy) : data(copy.data), height(), left(NULL), right(NULL) { }
	
	// Assignment Operator
	AVLNode<T>& operator=(const AVLNode<T>& assign) const{
		
		if(this != &assign){
			this->data = assign.data;
			this->left = NULL;
			this->right = NULL;
		}
		return *this;
	}
	
	AVLNode<T>* operator=(const AVLNode<T>* assign){
		this = assign;
		return *this;
	}
	
};

#endif

