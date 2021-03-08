#ifndef FINDCIRCULAR_H
#define FINDCIRCULAR_H

#include <iostream>
#include "SLLNode.h"

template< class T >
void findCircularRace(SLLNode<T>& head, SLLNode<T> *SLLNodeSlow, SLLNode<T> *SLLNodeFast){
	
	// Reset the counting pointers 
	SLLNodeSlow = &head;
	SLLNodeFast = &head;
	
	// Include a previous SLLNode to track the Previous Value
	SLLNode<T> *SLLNodePrev = SLLNodeFast;
	
	/* Problem 1 - Part 1 */
	
	if(SLLNodeSlow == SLLNodeFast){
		
		/* Part 2 Starts Here */
		
		std::cout << "Circular Link exists!" << std::endl;
		std::cout << "Origin of Circular Link: Address is " << (void *)&SLLNodePrev 
			<< " with data " << SLLNodePrev->data << std::endl;
			
		std::cout << "Destination of Circular Link: Address is " << (void *)&(SLLNodeSlow)
			<< " with data " << SLLNodeSlow->data << std::endl;
		
	}
	else{
		
		std::cout << "No loop in the list" << std::endl;
	}

}


#endif
