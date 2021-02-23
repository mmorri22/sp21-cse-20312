#ifndef NODE_H
#define NODE_H

#include <cstdlib>

template< class T >
class Node{
	
	private:
	
		T the_data;
		Node<T>* next;
	
	public:
	
		Node() : the_data(), next( NULL ) {}
		
		Node( const T& data_in ) 
			: the_data( data_in ), next(NULL) {}
		
		Node( const Node<T>& copy ) 
			: the_data( copy.the_data ), next( NULL ) {}
	
		Node<T>& operator=( const Node<T>& rhs ){
			
			if( this != &rhs ){
				
				this->the_data = rhs.the_data;
				
				this->next = NULL;
			}
			
			return *this;
		}
		
		~Node(){
			
			delete next;
		}
		
		void set_data( const T& data_in ) {
			
			the_data = data_in;
		}
		
		const T& get_data() const{
			
			return the_data;
		}
	
		void set_next( Node<T>* next_in ){
			
			next = next_in;
		
		}
		
		const Node<T>* get_next() const{
			
			return next;
			
		}
};

#endif