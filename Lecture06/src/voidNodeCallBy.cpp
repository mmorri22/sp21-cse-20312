#include <iostream>
#include <cstdlib>

#define COUT std::cout
#define ENDL std::endl

template<class T, class U>
void setNodeValues( void*& reference, T firstVar, U secondVar ){
    
    *((T *)(reference)) = firstVar;
    
    reference = (T*)reference + sizeof(T);
	
    *((U *)(reference)) = secondVar;
    
}

template<class T, class U>
void printNodeValues( void*& reference ){
    
    COUT << *((T *)(reference))  << ENDL;
    
    reference = (T*)reference + sizeof(T);
	
    COUT << *((U *)(reference)) << ENDL;
    
}

int main(void){
    
    long unsigned int nodeSize = sizeof(double) + sizeof(float);
    
    void* node = malloc( nodeSize );
	
	COUT << "Initial node location: " << node << ENDL;
    
    setNodeValues( node, -0.625, (float)1.5625 );
	
	COUT << "Location after setNodeValues: " << node << ENDL;
	
	/* Reset node value */
	node = (double *)node - sizeof(double);
	
	COUT << "Location after reset: " << node << ENDL;
    
    printNodeValues<double, float>( node );
	
	COUT << "Location after printNodeValues: " << node << ENDL;
	
	/* Reset node value so we free the correct location */
	node = (double *)node - sizeof(double);
	
	COUT << "Location after final reset: " << node << ENDL;
    
    free( node );

    return 0;
}