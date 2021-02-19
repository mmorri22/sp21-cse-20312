#include "../inc/Node.h"

#include <string>
#include <iostream>

#define STRING std::string
#define COUT std::cout 
#define ENDL std::endl

template< class T >
void print_values( const Node<T>* the_node ){
	
	if( the_node->get_next() != NULL ){
		
		print_values( the_node->get_next() );
		
	}
	
	COUT << the_node->get_data() << ENDL;
	
}

int main(){
	
	Node< STRING > node1;
	
	Node< STRING > node2( "Notre" );
	
	Node< STRING > node3( node1 );
	
	Node< STRING > node4 = node2;
	
	node1.set_data( "Dame" );
	node3.set_data( "Go" );
	node4.set_data( "Let's" );
	
	node1.set_next( &node2 );
	node2.set_next( &node3 );
	node3.set_next( &node4 );
	
	print_values( &node1 );
	
	return 0;
}
