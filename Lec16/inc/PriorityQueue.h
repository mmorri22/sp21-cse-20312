#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "MaxHeap.h"

template<class T>
class PriorityQueue {

	private:

		MaxHeap<T> theHeap;

	public:

		// Default constructor
		PriorityQueue() : theHeap() {}
		
		void push(const T& elem){
			// Change from push_back to insert
			theHeap.push( elem );
		}
		
		void pop(){
			
			theHeap.pop();
			
		}

		T front() const{
			
			return theHeap.top();
			
		}

		bool empty() const{
			
			return theHeap.empty();
			
		}


};

#endif
