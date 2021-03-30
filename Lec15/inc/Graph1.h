#ifndef GRAPH1_H
#define GRAPH1_H

#include "Vertex2.h"
#include "DynArr.h"
#include <iostream>

template<class T>
class Graph{
	
	/* Lecture 15 - Problem 2 Begins Here */
	
	private:
		
		
	public:
		// Constructor
		
		
		// Add a vertex prior to any edges

		
		// Add Edge from Origin to Destination, with weight

		
		// Overloaded Operator - Provided for the students
		friend std::ostream& operator<<( std::ostream& output, const Graph<T>& theGraph ){
			
			for( unsigned int iter = 0; iter < theGraph.vertices.length(); iter++ ){
				
				output << iter << ": " << theGraph.vertices[ iter ] << std::endl;
				
			}
			
			return output;
		}
};

#endif
