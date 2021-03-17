#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include "MaxHeap.h"

template<class T>
class PriorityQueue {

	private:

		MaxHeap<T> heap;
		
	public:

		// Default constructor
		PriorityQueue() : heap() {}

		void push(T elem){

			heap.push( elem );

		}
		
		void pop(){

			if(queueSize > 0){
				heap.pop();
			}
		}

		T front() const{
			return heap.top();
		}

		bool empty() const{
			return heap.empty();
		}

};

#endif
