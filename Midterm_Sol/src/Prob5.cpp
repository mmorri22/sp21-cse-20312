#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <unordered_map>

#define COUT std::cout 
#define ENDL std::endl
#define OFSTREAM std::ofstream
#define VECTOR std::vector
#define PAIR std::pair

// Problem 5 Starts Here
void DFS( const VECTOR< PAIR<int, int> >& graph_vec, OFSTREAM& out, int begin, int end ){
	
	std::unordered_map< int, int > the_map;
	std::stack< PAIR<int, int> > the_stack;
	
	// Initialize the traversal
	the_map.insert( { graph_vec.at( begin ).first, -1 } );
	the_map.insert( { graph_vec.at( begin ).second, graph_vec.at( begin ).first } );
	
	// Check all the edges 
	for( PAIR<int, int> curr_pair : graph_vec ){
		
		// If we haven't encountered the destination of the edge
		if( the_map.count( curr_pair.second ) == 0 ){
			
			the_map.insert( {curr_pair.second, curr_pair.first} );
		}
		
	}
	
	// While the second element in the pair is not -1
	for( int value = end; value != -1; value = the_map[ value ] ){
		
		the_stack.push( { value, the_map[value] } );
		
	}
	
	while( !the_stack.empty() ){
		
		out << the_stack.top().first << " ";
		
		the_stack.pop();
	}
	out << ENDL;
	
}

int main(){
	
	OFSTREAM out("Prob5.txt");
	
	VECTOR< PAIR<int, int> > graph_vec{ {0, 1}, {0, 2}, {1, 2}, {1, 3}, {2, 4}, {3, 5} };
	
	DFS( graph_vec, out, 0, 5 );
	
	out.close();
	
	return 0;
	
}