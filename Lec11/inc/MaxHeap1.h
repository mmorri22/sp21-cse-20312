#ifndef MAXHEAP1_H
#define MAXHEAP1_H

#include <vector>
#include <iostream>

#define VECTOR std::vector

template< class T >
class MaxHeap{
	
	private:
	
		VECTOR<T> heapArray;	// Dynamic Array to Maintain the Heap
		
	public:
	
		// Default Constructor
		MaxHeap() : heapArray() {}
		
};

#endif