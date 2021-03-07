#ifndef DLLNODE_H
#define DLLNODE_H

#include <cstdlib>	/* For NULL */

/* NODE contains the data and a pointer to the next DLLNode */
template< class T >
struct DLLNode
{
	/* Public struct members */
	T     data;
	DLLNode<T>* next;
	DLLNode<T>* prev;
	
	/* Default constructor */
	DLLNode() : data(), next(NULL), prev(NULL) { }
	
	/* Overloaded constructor */
	DLLNode(const T& dataIn) : data(dataIn), next(NULL), prev(NULL) { }
	
	/* Destructor */
	~DLLNode(){
		
		delete next;
		
	}
	

	/* Copy constructor (*/
	DLLNode(const DLLNode<T>& copy) : data( copy.data ), next( NULL ), prev( NULL ) { }
	
	
	/* Assignment Operator */
	DLLNode<T>& operator=(const DLLNode<T>& assign){
		
		if(this != &assign){
			this->data = assign.data;
			this->next = NULL;
			this->prev = NULL;
		}
		return *this;
	}
	
	
	/* Node pointer assignment operator */
	DLLNode<T>* operator=(const DLLNode<T>* assign){
		
		if(this != (void *)&assign){
			this->data = assign->data;
			this->next = NULL;
			this->prev = NULL;
		}
		return *this;
	}
	
	/* Node != operator */
	bool operator!=(const DLLNode<T>* rhs){
		
		return this != (void *)&rhs;
		
	}
	
};



#endif