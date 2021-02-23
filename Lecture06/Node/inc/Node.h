#ifndef NODE_H
#define NODE_H

#include <cstdlib>

template< class T >
class Node{

		private:
		
			T data;
			Node<T>* next;
			
		public:
		
			Node() : data(), next( NULL ) {}
			
			Node( const T& data_in ) : data( data_in ), next( NULL ) {}
			
			~Node(){
				
				delete next;
				
			}
			
			Node( const Node<T>& copy ) 
				: data( copy.data ), next( NULL ) {}
			
			Node<T>& operator=( const Node<T>& rhs ){
				
				if( this != &rhs ){
					
					data = rhs.data;
					
					next = NULL;
				}
				
				return *this;
			}
			
			
			void set_data( const T& data_in ){
				
				data = data_in;
			}
			
			
			const T& get_data() const {
				
				return data;
			}
			
			
			void set_next( Node<T>* next_in ){
				
				next = next_in;
				
			}
			
			const Node<T>* get_next() const{

				return next;
			}	

			
			Node<T>* get_next(){

				return next;
			}				
	
};


#endif