#ifndef SLLNODE_H
#define SLLNODE_H

#include <cstdlib>
#include <iostream>

/* NODE contains the data and a pointer to the next SLLNode */
template< class T >
struct SLLNode
{
	T     data;
	SLLNode<T>* next;
	
	/********************************************
	* Function Name  : SLLNode
	* Pre-conditions : none
	* Post-conditions: none
	* 
	* Node Struct Default Constructor 
	********************************************/
	SLLNode() : data(), next(NULL) { }
	
	
	/********************************************
	* Function Name  : SLLNode
	* Pre-conditions : none
	* Post-conditions: none
	* 
	* Node Struct Overloaded Constructor with data input 
	********************************************/
	SLLNode(T dataIn) : data(dataIn), next(NULL) { }
	

	/********************************************
	* Function Name  : ~SLLNode
	* Pre-conditions : none
	* Post-conditions: none
	*  
	* Delete operator required for PQC since it contains a 
	* private member which is a pointer
	********************************************/
	~SLLNode(){
		
		// delete next;
		
	}
	

	/********************************************
	* Function Name  : SLLNode
	* Pre-conditions : const SLLNode& copy
	* Post-conditions: none
	*  
	* Rule of 3: Copy Constructor
	* Required for -weffc++ flag
	********************************************/
	SLLNode(const SLLNode<T>& copy){
		data = copy.data;
		next = copy.next;
	}
	
	
	/********************************************
	* Function Name  : operator=
	* Pre-conditions : const SLLNode& assign
	* Post-conditions: SLLNode&
	*
	* Rule of 3: Assignment Operator
	* Required for -weffc++ flag 
	********************************************/
	SLLNode<T>& operator=(const SLLNode<T>& assign){
		
		if(this != &assign){
			this->data = assign.data;
			this->next = assign.next;
		}
		return *this;
	}
	
	
	/********************************************
	* Function Name  : operator=
	* Pre-conditions : const SLLNode* assign
	* Post-conditions: SLLNode*
	* 
	* Assignment Operator for Pointer
	* Required for pointer assignment in SLList
	********************************************/
	SLLNode<T>* operator=(const SLLNode<T>* assign){
		
		if(this != (void *)&assign){
			this->data = assign->data;
			this->next = assign->next;
		}
		return *this;
	}
	
	
	/********************************************
	* Function Name  : operator!=
	* Pre-conditions : const SLLNode* rhs
	* Post-conditions: bool
	*  
	* != Operator for Pointer
	* Required for pointer comparison in SLList
	********************************************/
	bool operator!=(const SLLNode<T>* rhs){
		
		return this != (void *)&rhs;
		
	}
	
};
		
#endif