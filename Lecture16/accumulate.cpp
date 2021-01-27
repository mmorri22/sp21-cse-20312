#include <iostream>
#include <algorithm>
#include <vector>

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

template< class T >
void print_Vec( const VECTOR< T >& theVec ){
	
	for( const T& curr : theVec ){
		
		COUT << curr << " ";
	}
	COUT << ENDL;
}

template< class T >
T accum_Vec( const VECTOR< T >& theVec ){
	
	return accumulate( theVec.begin(), theVec.end(), (T)0 ); 
	
}

int main(){
	
	/* Example with double */
	VECTOR< double > vec_double;
	
	for( unsigned int iter = 0; iter < 6; iter++ ){
		vec_double.push_back( iter * 1.1 );
	}
	
	COUT << "Double vector: ";
	print_Vec( vec_double );
	
	COUT << "Double accumulate: " << accum_Vec( vec_double ) << ENDL;
	
	return 0;
	
}