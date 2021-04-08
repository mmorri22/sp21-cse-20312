#ifndef BSTNODE4_H
#define BSTNODE4_H

#include <cstdlib>	// Needed for NULL keyword
#include <iostream>

template< class T >
struct BSTNode{
	
	// Struct Members
	T     data;
	BSTNode<T>* left;
	BSTNode<T>* right;	
	
	// Default Constructor
	BSTNode() : data(), left(NULL), right(NULL){ 
	
		std::cout << "Constructing " << this << std::endl;
	
	}
	
	// Overloaded Constructor
	BSTNode(const T& dataIn) : data(dataIn), left(NULL), right(NULL){ 
	
		std::cout << "Constructing " << this << std::endl;
	
	}

	// Destructor
	~BSTNode(){
		
		if( right != NULL )
			delete right;
		
		if( left != NULL )
			delete left;
		
		std::cout << "Destructing " << this << std::endl;
		
	}
	
	// Copy Constructor
	BSTNode(const BSTNode<T>& copy) : data(copy.data), left(NULL), right(NULL) { }
	
	// Assignment Operator
	BSTNode<T>& operator=(const BSTNode<T>& assign) const{
		
		if(this != &assign){
			this->data = assign.data;
			this->left = assign.left;
			this->right = assign.right;
		}
		return *this;
	}
	
	BSTNode<T>* operator=(const BSTNode<T>* assign){
		
		this = &assign;
		
		return *this;
	}
	
};

#endif

