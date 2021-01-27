#include <iostream>
#include <deque>

#define COUT std::cout 
#define ENDL std::endl
#define DEQUE std::deque

int main(){

    DEQUE< int > my_deq ;

	// Initialize the Deque
    for( int i =0; i < 5; i++ ){
        my_deq.push_front( i + 25 );
        my_deq.push_back( i + 50 );
    }
    
	// C++ Smart Iterator Example for Deque
    COUT << "Current my_deq: ";
    for( int curr : my_deq ){
        COUT << curr << " ";
    }
    COUT << ENDL;

    // Can access at(), just like std::vector
    COUT << "At index 2 is: " << my_deq.at(2) << ENDL;

    // Can get item from back and push to front
    for( int i =0; i < 5; i++ ){
        int x = my_deq.back();
        my_deq.push_front ( x + 10 );
        my_deq.pop_back();
    }
    
    // Print final deque
    COUT << "Final my_deq: ";
    while( !my_deq.empty() ){

        COUT << my_deq.front() << " ";
        my_deq.pop_front();
        
    }
    COUT << ENDL;
    
     return 0;
     
}