#include "../inc/Node.h"

#include <string>
#include <iostream>

#define STRING std::string
#define COUT std::cout 
#define ENDL std::endl

template< class T >
void add_to_end( const Node<T>* the_node ){
	
	
}

template< class T >
void print_values( const Node<T>* the_node ){
	
	if( the_node->get_next() != NULL ){
		
		print_values( the_node->get_next() );
		
	}
	
	COUT << the_node->get_data() << ENDL;
	
}

int main(){
	
	Node< STRING > node1( "Dame" );
	
	print_values( &node1 );
	
	return 0;
}
