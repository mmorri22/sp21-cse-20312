#include <iostream>
#include <algorithm>
#include <vector>

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

template< class T >
void print_Vector( const VECTOR< T >& theVector ){
	
	for( const T& curr : theVector ){
		
		COUT << curr << " ";
	}
	COUT << ENDL;
}

// Copies the elements from List1 to List2
template< class T >
void copy_Vector( const VECTOR< T >& vec1, VECTOR< T >& vec2 ){
	
	std::copy( vec1.begin(), vec1.end(), vec2.begin() ); 
	
}

int main(){
	
	/* Example with double */
	VECTOR< double > vec1;
	
	/* Put values on front and back of deque */
	for( unsigned int iter = 0; iter < 5; iter++ ){
		
		vec1.push_back( (double)iter * 5 );
		
	}
	
	COUT << "Vec1 Before: ";
	print_Vector( vec1 );
	
	// In order to copy, vec2 must have the same length 
	// Or it will seg fault
	// So construct with vec1.size()
	VECTOR< double > vec2( vec1.size() );
	
	// Copy the Vector
	copy_Vector( vec1, vec2 );
	
	COUT << "Vec2 After : ";
	print_Vector( vec2 );
	
	return 0;
	
}