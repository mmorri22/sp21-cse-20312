#include "../inc/Node.h"

#include <string>
#include <iostream>

#define STRING std::string
#define COUT std::cout 
#define ENDL std::endl

template< class T >
void add_to_end( Node<T>* the_node, const T& the_data ){
	
	if( the_node->get_next() != NULL ){
		
		add_to_end( the_node->get_next(), the_data );
		
	}
	else{
		
		the_node->set_next( new Node<T>( the_data ) );
		
	}
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
	
	add_to_end( &node1, STRING("Notre") );
	
	add_to_end( &node1, STRING("go") );
	
	add_to_end( &node1, STRING("Let's") );
	
	print_values( &node1 );
	
	return 0;
}
