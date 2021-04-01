#ifndef GRAPH_H
#define GRAPH_H

#include "Vertex.h"
#include "DynArr.h"
#include "queue.h"
#include "stack.h"
#include "PriorityQueue.h"
#include "LinearProbe.h"
#include "MSTElem.h"
#include <iostream>

template<class T>
class Graph{
	
	private:
	
		// Private DFS method
		bool DFS( unsigned int destin, unsigned int vertVal, DynArr<unsigned int>& parents, DynArr<bool>& visited ){
				
			if( !visited[ vertVal ] ){
				
				// Set the visited edges to true
				visited[ vertVal ] = true;
				
				// Check each outgoing edge 
				for( unsigned int iter = 0; iter < vertices[ vertVal ].num_edges(); iter++ ){
					
					// Obtain a temporary copy of the Edge
					Edge tempEdge = vertices[ vertVal ].get_edge( iter );
					
					// If the destination has not been visited, make recursive call
					if( !visited[ tempEdge.destin ] ){
						
						// Set the destination's parent to vertVal
						parents[ tempEdge.destin ] = vertVal;
						
						// If we found the vertex, return true
						if( tempEdge.destin == destin ){
							
							return true;
						}
						
						// Otherwise, recursively call the destination vertex
						bool check = DFS( destin, tempEdge.destin, parents, visited );
						
						if( check ){
							
							return true;
						}
					}
					
				}
			}
			
			return false;
				
		}
		
		
		// Private DFS method
		void TopSort( unsigned int vertVal, DynArr<unsigned int>& parents, DynArr<bool>& visited ){
				
			if( !visited[ vertVal ] ){
				
				// Set the visited edges to true
				visited[ vertVal ] = true;
				
				// Check each outgoing edge 
				for( unsigned int iter = 0; iter < vertices[ vertVal ].num_edges(); iter++ ){
					
					// Obtain a temporary copy of the Edge
					Edge tempEdge = vertices[ vertVal ].get_edge( iter );
					
					// If the destination has not been visited, make recursive call
					if( !visited[ tempEdge.destin ] ){
						
						// Set the destination's parent to vertVal
						parents[ tempEdge.destin ] = vertVal;
						
						// Otherwise, recursively call the destination vertex
						TopSort( tempEdge.destin, parents, visited );
						
					}
				}
			}
		}
	
		DynArr< Vertex< T > > vertices;	// Adjacency Lisy
		
	public:
		// Constructor
		Graph( ) : vertices() {}
		
		// Add a vertex prior to any edges
		void add_vertex( T vertexData ){
			
			Vertex<T> theVertex( vertexData );
			vertices.push_back( theVertex );
		}
		
		// Add Edge from Origin to Destination, with weight
		void add_edge(unsigned int origin, unsigned int destin, int weight ){
			if( origin < vertices.length() && destin < vertices.length() ){
			
				vertices[origin].add_edge( destin, weight );
		
			}
		}
		
		// Return the value with a Call by Reference
		// bool for if the vertex requested was valid
		bool get_vertex_value( unsigned int vertex, T& value ){
			
			if( vertex < vertices.length() ){
				
				value = vertices.at(vertex).get_vertex_value();
				return true;
			}
			
			return false;
			
		}
		
		// Set the value at a given vertex 
		// bool for if the vertex requested was valid
		bool set_vertex_value( unsigned int vertex, T& value ){
						
			if( vertex < vertices.length() ){
				
				value = vertices[vertex].set_vertex_value( value );
				return true;
			}			
			return false;
		}
		
		// Return the value with a Call by Reference
		// bool for if the origin and destination requested were valid
		bool get_edge_value( unsigned int origin, unsigned int destin, int& weight){
				
			if( origin < vertices.length() && destin < vertices.length() ){
				
				return vertices[origin].get_edge_value( destin, weight );
			}
			
			return false;
		}
		
		// Set the value at a given origin and destination 
		// bool for if the origin and destination requested were valid
		bool set_edge_value( unsigned int origin, unsigned int destin, int weight){
				
			if( origin < vertices.length() && destin < vertices.length() ){
				
				return vertices[origin].set_edge_value( destin, weight );
			}
			
			return false;
		}
		
		// Remove an edge
		bool remove_edge( unsigned int origin, unsigned int destin){
				
			// If the origin and destination are valid
			if( origin < vertices.length() && destin < vertices.length() ){
				
				// From the Origin vertex, remove the destination vertex
				return vertices[origin].remove_edge( destin );
			}
			
			return false;
		}
		
		
		void remove_vertex( unsigned int vertVal ){
			
			// First, perform Lazy Deletion on the vertex 
			vertices[ vertVal ].lazy_delete();
			
			// Next, go through each vertex and remove all edges with the destination to the vertex 
			for( unsigned int iter = 0; iter < vertices.length(); iter++ ){
				
				int jter = 0;
				
				// While the increment is less than the number of edges
				while( jter < vertices[iter].num_edges() ){
					
					// If the destination of the edge is the vertex we are removing
					if( vertices[iter].get_edge( jter ).destin == vertVal ){
						
						// Remove that edge
						vertices[iter].remove_edge( vertVal );
					}
					else{
						// Only increment jter is there is not any deletion
						jter++;
					}
				}
			}
		}
		
		
		// Public DFS Method
		void DFS( unsigned int destin ){
			
			// If the input is invalid or the Graph is empty
			if( destin >= vertices.length() || vertices.length() == 0){
				
				std::cout << "Invalid inputs to DFS" << std::endl;
				
				return;
			}
			
			/* Initialize the Values for the DFS */
			
			// Track the parents for printing the results
			DynArr<unsigned int> parents(vertices.length());
			
			// Keep track of the visited vertices
			DynArr<bool> visited(vertices.length());
			
			// Create a stack to store the final path
			stack< unsigned int > finalPath;
			bool found = false;

			// Initialize the search	
			parents[0] = -1;
			
			// Set all the visited elements to false
			for( unsigned int iter = 0; iter < vertices.length(); iter++ ){
				visited[iter] = false;
			}
			
			// If the destination is the origin, mark found as true
			if( destin == 0 ){
				
				found = true;
				
			}
			
			// Otherwise, run the recursive DFS 
			else{

				found = DFS( destin, 0, parents, visited );
			
			}
			
			// If we have not found the node, there is no path
			if( !found ){
				
				std::cout << "No valid path from 0 to " << destin << std::endl;
				return;
			}
			
			// Otherwise, go through the parents until we find the origin
			unsigned int sentinel = destin;	
			finalPath.push( sentinel );		// Push the desination onto the stack
			
			while( parents[sentinel] != -1 ){
				
				finalPath.push( parents[sentinel] );	// Push the parent onto the stack
				sentinel = parents[sentinel];			// Update the sentinel
				
			}
			
			// Stack contains the correct order 
			std::cout << "The valid DFS path from 0 to " << destin << " is: ";
			while( !finalPath.empty() ){
				
				std::cout << finalPath.top() << " ";
				finalPath.pop();
			}
			std::cout << std::endl;
				
			
		}
		
		
		// Public DFS Method
		void DFS( unsigned int origin, unsigned int destin ){
			
			// If the input is invalid or the Graph is empty
			if( origin >= vertices.length() || destin >= vertices.length() || vertices.length() == 0){
				
				std::cout << "Invalid inputs to DFS" << std::endl;
				
				return;
			}
			
			/* Initialize the Values for the DFS */
			
			// Track the parents for printing the results
			DynArr<unsigned int> parents(vertices.length());
			
			// Keep track of the visited vertices
			DynArr<bool> visited(vertices.length());
			
			// Create a stack to store the final path
			stack< unsigned int > finalPath;
			bool found = false;

			// Initialize the search	
			parents[ origin ] = -1;
			
			// Set all the visited elements to false
			for( unsigned int iter = 0; iter < vertices.length(); iter++ ){
				visited[iter] = false;
			}
			
			// If the destination is the origin, mark found as true
			if( destin == origin ){
				
				found = true;
				
			}
			
			// Otherwise, run the recursive DFS 
			else{

				found = DFS( destin, origin, parents, visited );
			
			}
			
			// If we have not found the node, there is no path
			if( !found ){
				
				std::cout << "No valid path from " << origin << " to " << destin << std::endl;
				return;
			}
			
			// Otherwise, go through the parents until we find the origin
			unsigned int sentinel = destin;	
			finalPath.push( sentinel );		// Push the desination onto the stack
			
			while( parents[sentinel] != -1 ){
				
				finalPath.push( parents[sentinel] );	// Push the parent onto the stack
				sentinel = parents[sentinel];			// Update the sentinel
				
			}
			
			// Stack contains the correct order 
			std::cout << "The valid DFS path from " << origin << " to " << destin << " is: ";
			while( !finalPath.empty() ){
				
				std::cout << finalPath.top() << " ";
				finalPath.pop();
			}
			std::cout << std::endl;
				
			
		}
		
		
		// Method for Topological Sort
		Graph<T> TopSort( ){
			
			/* Initialize the Values for the Topological Sort */
			
			/* Initialize the return Graph */
			Graph<T> TopSortGraph;
			
			for( unsigned int iter = 0; iter < vertices.length(); iter++ ){
				
				// Add the value of each vertex to the TopSort graph
				TopSortGraph.add_vertex( vertices[ iter ].get_vertex_value() );
				
			}
			
			// Track the parents for printing the results
			DynArr<unsigned int> parents(vertices.length());
			
			// Keep track of the visited vertices
			DynArr<bool> visited(vertices.length());
			
			// Create a stack to store the final path
			stack< unsigned int > finalPath;

			// Initialize the search	
			parents[ 0 ] = -1;
			
			// Set all the visited elements to false
			for( unsigned int iter = 0; iter < vertices.length(); iter++ ){
				visited[iter] = false;
			}
			
			// Run the Topological Sort
			TopSort( 0, parents, visited );
			
			// Add all the edges from the parent to the Graph 
			for( unsigned int iter = 1; iter < vertices.length(); iter++ ){
				
				// Get the edge weight 
				int edgeWeight = 0;
				get_edge_value( parents[iter], iter, edgeWeight );
				
				// Add the Edge
				TopSortGraph.add_edge(parents[iter], iter, edgeWeight );
			}
			
			return TopSortGraph;
		}
		
		
		void BFS( unsigned int destin ){
			
			// If Graph can't be search, inform user and return 
			// destin cannot be greater than the number of vertices
			// The number of vertices must not be 0
			if( destin >= vertices.length() || vertices.length() == 0){
				
				std::cout << destin << " is not a valid vertex location" << std::endl;
				
				return;
			}
			
			/* Create elements for the search */
			
			// queue to store the next vertex to evaluate
			queue< unsigned int > theQueue;
			
			// Keeping track if the vertex has been visited. Set all initially to false
			bool* visited = new bool[vertices.length()];
			for( unsigned int iter = 0; iter < vertices.length(); iter++ ){
				
				visited[iter] = false;
			}
			
			// Keeping track of the parents 
			unsigned int* parents = new unsigned int[vertices.length()];
			
			// Use this stack for the final path
			stack< unsigned int > finalPath;
			
			/* Initialize the search */
			bool found = false; 
			
			// Push the origin onto the Queue
			theQueue.push(0);
			
			// The origin has no parent, and the origin has been visited
			parents[0] = -1;
			
			// Set found to true if the origin is the destination
			if( destin == 0 ){
				found = true;
			}
			
			// While the element is not found and the queue is not empty
			while( !found && !theQueue.empty() ){
				
				// First step in BFS is to obtain and remove the front element from the queue 
				unsigned int vertex = theQueue.front();
				theQueue.pop();
				
				// Mark the vertex as visited
				visited[ vertex ] = true;
				
				// Iterate through each edge 
				for( unsigned int iter = 0; iter < vertices[ vertex ].num_edges(); iter++){
					
					// Get the destination from the edge
					unsigned int edgeDestin = vertices[ vertex ].get_edge( iter ).destin;
					
					// If the edge's destination matches our destination, we found the node
					if( edgeDestin == destin ){
						
						found = true;
						
						// Mark the destination's parent as vertex 
						parents[ edgeDestin ] = vertex;
						
						break;
					}
					
					// If the destination has not been visited
					else if( visited[ edgeDestin ] == false ) {
						
						// Push the destination onto the queue
						theQueue.push( edgeDestin );
						
						// Mark edgeDestin's parent as vertex
						parents[ edgeDestin ] = vertex;
						
						// Mark visited as true
						visited[ edgeDestin ] = true;

					}
				}

			}
			
			// If we have not found the node, there is no path
			if( !found ){
				
				std::cout << "No valid path from origin to " << destin << std::endl;
				return;
			}
			
			// Otherwise, go through the parents until we find the origin
			unsigned int sentinel = destin;	
			finalPath.push( sentinel );		// Push the desination onto the stack
			
			while( parents[sentinel] != -1 ){
				
				finalPath.push( parents[sentinel] );	// Push the parent onto the stack
				
				sentinel = parents[sentinel];			// Update the sentinel
				
			}
			
			// Stack contains the correct order 
			std::cout << "The valid BFS path from the 0 to " << destin << " is: ";
			while( !finalPath.empty() ){
				
				std::cout << finalPath.top() << " ";
				finalPath.pop();
			}
			std::cout << std::endl;
		}

		// BFS with an origin and destination node
		void BFS( unsigned int origin, unsigned int destin ){
			
			// If Graph can't be search, inform user and return 
			// origin destin cannot be >= than the number of vertices
			// The number of vertices must not be 0
			if( origin >= vertices.length() || destin >= vertices.length() || vertices.length() == 0){
				
				std::cout << "Invalid BFS inputs" << std::endl;
				
				return;
			}
			
			/* Create elements for the search */
			
			// queue to store the next vertex to evaluate
			queue< unsigned int > theQueue;
			
			// Keeping track if the vertex has been visited. Set all initially to false
			bool* visited = new bool[vertices.length()];
			for( unsigned int iter = 0; iter < vertices.length(); iter++ ){
				
				visited[iter] = false;
			}
			
			// Keeping track of the parents 
			unsigned int* parents = new unsigned int[vertices.length()];
			
			// Use this stack for the final path
			stack< unsigned int > finalPath;
			
			/* Initialize the search */
			bool found = false; 
			
			// Push the origin onto the Queue
			theQueue.push( origin );
			
			// The origin has no parent, and the origin has been visited
			parents[ origin ] = -1;
			
			// Set found to true if the origin is the destination
			if( destin == origin ){
				found = true;
			}
			
			// While the element is not found and the queue is not empty
			while( !found && !theQueue.empty() ){
				
				// First step in BFS is to obtain and remove the front element from the queue 
				unsigned int vertex = theQueue.front();
				theQueue.pop();
				
				// Mark the vertex as visited
				visited[ vertex ] = true;
				
				// Iterate through each edge 
				for( unsigned int iter = 0; iter < vertices[ vertex ].num_edges(); iter++){
					
					// Get the destination from the edge
					unsigned int edgeDestin = vertices[ vertex ].get_edge( iter ).destin;
					
					// If the edge's destination matches our destination, we found the node
					if( edgeDestin == destin ){
						
						found = true;
						
						// Mark the destination's parent as vertex 
						parents[ edgeDestin ] = vertex;
						
						break;
					}
					
					// If the destination has not been visited
					if( visited[ edgeDestin ] == false ) {
						
						// Push the destination onto the queue
						// std::cout << "pushing " << edgeDestin << std::endl;
						theQueue.push( edgeDestin );
						// Mark edgeDestin's parent as vertex
						parents[ edgeDestin ] = vertex;
						
						visited[ edgeDestin ] = true;
					}
				}

			}
			
			// If we have not found the node, there is no path
			if( !found ){
				
				std::cout << "No valid path from " << origin << " to " << destin << std::endl;
				return;
			}
			
			// Otherwise, go through the parents until we find the origin
			unsigned int sentinel = destin;	
			finalPath.push( sentinel );		// Push the desination onto the stack
			
			while( parents[sentinel] != -1 ){
				
				finalPath.push( parents[sentinel] );	// Push the parent onto the stack
				
				sentinel = parents[sentinel];			// Update the sentinel
				
			}
			
			// Stack contains the correct order 
			std::cout << "The valid BFS path from " << origin << " to " << destin << " is: ";
			while( !finalPath.empty() ){
				
				std::cout << finalPath.top() << " ";
				finalPath.pop();
			}
			std::cout << std::endl;
		}
		
		
		// Return the Minimum Spanning Tree
		Graph<T> MST(){
			
			Graph<T> MSTGraph;
			
			PriorityQueue< MSTElem > MST_PQ;
			HashTable< unsigned int, bool > frontier;
			unsigned int* parents = new unsigned int[ vertices.length() ];
			int* weights = new int[ vertices.length() ];
			
			MSTElem origin( 0, 0 );
			MST_PQ.push( origin );
			frontier.insert( {0, true} );
			parents[0] = -1;
			weights[0] = -2147483648;
			
			for( unsigned int i = 1; i < vertices.length(); i++ ){
				
				MSTElem temp( i, 2147483647 );
				weights[i] = 2147483647;
				MST_PQ.push( temp );
				frontier.insert( {i, true} );
			}
			
			while( !MST_PQ.empty() ){
				
				// Obtain the first element
				MSTElem currElem = MST_PQ.front();
				
				// Remove the first element
				MST_PQ.pop();
				
				// Set the current node in the frontier to false
				frontier[ currElem.index ] = false;
				
				// Go through all the outgoing edges of the vertex
				for( unsigned int i = 0; i < vertices[ currElem.index ].num_edges(); i++ ){
					
					// Get the current edge from MST current element's vertex
					Edge currEdge = vertices[ currElem.index ].get_edge( i );
					
					if( currEdge.weight < weights[ currEdge.destin ] && frontier[ currEdge.destin ] ){
						
						weights[ currEdge.destin ] = currEdge.weight;
						parents[ currEdge.destin ] = currElem.index;
						
						MSTElem pushElem( currEdge.destin, currEdge.weight);
						MST_PQ.push( pushElem );
						
					}
				}
			}
			
			for( unsigned int i = 0; i < vertices.length(); i++){
				
				MSTGraph.add_vertex( vertices[i].get_vertex_value() );
			}
			
			for( unsigned int i = 0; i < vertices.length(); i++){
				
				if( parents[i] != -1 ){
					
					MSTGraph.add_edge( parents[i], i, weights[i] );
					
				}
			}
			
			return MSTGraph;
			
		}
		
		
		// Overloaded Operator
		friend std::ostream& operator<<( std::ostream& output, const Graph<T>& theGraph ){
			
			for( unsigned int iter = 0; iter < theGraph.vertices.length(); iter++ ){
				
				output << iter << ": " << theGraph.vertices[ iter ] << std::endl;
				
			}
			
			return output;
		}
};

#endif
