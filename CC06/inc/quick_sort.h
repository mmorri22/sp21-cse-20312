#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <vector>
#include <iostream>
#include <algorithm> // for std::random_shuffle ONLY

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

template< class T >
void print_vec_func( const VECTOR< T >& print_vec ){
	
    for( int curr_val : print_vec ){
        
        COUT << curr_val << " ";
        
    }
	
	COUT << ENDL;
}

template<class T>
void swap( T& first, T& second ){
	
	// Swap the values
	
}

template<class T>
int partition( VECTOR< T >& sort_vec, int min, int max ){
	

}


template<class T>
void quick_sort_func( VECTOR< T >& sort_vec, int min, int max ){



}

#endif