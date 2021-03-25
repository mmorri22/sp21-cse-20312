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
	
	// Problem 5 Code Starts Here 
	
	// Initialize the traversal
	
	// Check all the edges 
		
		// If we haven't encountered the destination of the edge

		
	
	// While the second element in the pair is not -1


	
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