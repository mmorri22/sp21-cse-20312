#include "../inc/Graph7.h"
#include <iostream>
#include <fstream>

#define COUT std::cout
#define ENDL std::endlt
#define OFSTREAM std::ofstream

int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob5.txt" );
	
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
	theGraph.BFS( 5 );
	theGraph.BFS( 4 );
	theGraph.BFS( 3 );
	theGraph.BFS( 2 );
	theGraph.BFS( 1 );
	theGraph.BFS( 0 );
	theGraph.BFS( 6 );
	theGraph.BFS( -1 );	
	
	// Print results:
	file_out << "Completed Problem 5" << std::endl;
	file_out << "30 points towards in-class assignments." << std::endl;	
	file_out.close();
	
	return 0;
}
