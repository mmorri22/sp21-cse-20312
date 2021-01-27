#include <iostream>
#include <algorithm>
#include <deque>

#define COUT std::cout
#define ENDL std::endl
#define DEQUE std::deque

template< class T >
void print_Deque( const DEQUE< T >& theDeque ){
	
	for( const T& curr : theDeque ){
		
		COUT << curr << " ";
	}
	COUT << ENDL;
}

// Runs Quick Sort on the Deque
template< class T >
void sort_Deque( DEQUE< T >& theDeque ){
	
	return sort( theDeque.begin(), theDeque.end() ); 
	
}

int main(){
	
	/* Example with double */
	DEQUE< double > Deque_double;
	
	/* Put values on front and back of deque */
	for( unsigned int iter = 0; iter < 5; iter++ ){
		
		Deque_double.push_front( (double)iter * 5 );
		Deque_double.push_back( (double)iter + 4 );
	}
	
	COUT << "Double Deque Before: ";
	print_Deque( Deque_double );
	
	// Sort the Deque
	sort_Deque( Deque_double );
	
	COUT << "Double Deque After : ";
	print_Deque( Deque_double );
	
	return 0;
	
}