#ifndef ALIENSOL_H
#define ALIENSOL_H

#include <iostream>
#include <string>
#include "Graph.h"
#include "DynArr.h"
#include "stack.h"
#include "LinearProbe.h"

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

template<class T>
void AlienGraphSol( Graph<T>& AlienLanguage, const DynArr < STRING >& words, 
	DynArr< std::pair<char, int> >& parents ){
		
	/* Lab work starts here */
	for( unsigned int iter = 0; iter < words.size(); iter++ ){
	
		for( long unsigned int jter = 0; jter < words[iter].size(); jter++ ){
			
			// If the graph does not contain a vertex with the character
			
				
				// Add that vertex to the graph
				
				
				// Add a new location on parents. -1 means no parent, which is fine for now
				
				
			
			
			// Meaning there are at least two characters in the word
			
				
				// Set the origin as the character that is one behind (jter - 1)
				
				
				// Set the destination as the current character (jter)
				
				
				// First, we check to make sure we don't add a duplicate character (origin != destin)
				// Second, we use connected from Lecture 16 to see if we they are not connected
				// Connected runs DFS between the origin and destin
				
					
					// Add an edge from origin (jter - 1) to destination (jter)
					
					
					// Update the parent if the parent does not exist
					
					
						// Update the destination's parent as the origin
						
					
					
				
			
			
			// Meaning there are at least three characters, and the most recent two are not duplicates
			
				
				// Set the destination as the current character (jter)
				
				
				// Obtain the origin of the previous parent
				
				
				// If that edge exists, remove it
				
					
					// Remove the old edge
					
					
					// Get the vertex location of jter-1
					 
					
					// Update the destination's parent as the origin
					
					
				
			
		}
	}	
}


template<class T>
void printGraphSol( const DynArr< std::pair<T, int> >& parents ){
	
	// COUT << ENDL << parents << ENDL;
	COUT << "Parent Array Values:" << ENDL;
	
	for( unsigned int iter = 0; iter < parents.size(); iter++ ){
		
		COUT << parents[iter].first << " " << parents[iter].second << ENDL;
		
	}
	
}

#endif