#include "../inc/Graph8.h"
#include <iostream>
#include <vector>

int main(){
	
	Graph< int > theGraph;
	
	theGraph.add_vertex( 4 );
	theGraph.add_vertex( 20 );
	theGraph.add_vertex( 5 );
	theGraph.add_vertex( 10 );
	theGraph.add_vertex( 30 );
	theGraph.add_vertex( 18 );
	
	// Nodes from 0
	theGraph.add_edge( 0, 1, 1 );
	theGraph.add_edge( 0, 2, 1 );

	// Nodes from 1	
	theGraph.add_edge( 1, 3, 1 );
	theGraph.add_edge( 1, 4, 1 );
	
	// Nodes from 2
	theGraph.add_edge( 2, 3, 1 );
	
	// Nodes from 3 
	theGraph.add_edge( 3, 5, 1 );
	
	// Nodes from 4 
	theGraph.add_edge( 4, 5, 1 );
	
	// Print results:
	std::cout << theGraph << std::endl;
	
	// Run Breadth-First Search
	theGraph.BFS( 0, 5 );
	theGraph.BFS( 0, 4 );
	theGraph.BFS( 1, 4 );
	theGraph.BFS( 2, 4 );
	theGraph.BFS( 1, 5 );
	theGraph.BFS( 2, 5 );
	theGraph.BFS( 3, 5 );
	theGraph.BFS( 3, 4 );
	theGraph.BFS( 4, 5 );
	theGraph.BFS( 5, 5 );
	theGraph.BFS( 6, 5 );
	theGraph.BFS( 5, -1 );
	return 0;
}
