#ifndef VERTEX1_H
#define VERTEX1_H

#include "DynArr.h"
#include "Edge.h"

template<class T>
class Vertex{

	/* Lecture 15 - Problem 1 Continues Here */
	private:
	
		
	public:
	
		
		/* Provided to students since get/set methods already covered */
		T get_vertex_value() const{
			
			return data;
		}
		
		void set_vertex_value(const T& dataIn){
			
			data = dataIn;
		}
	
};

#endif
