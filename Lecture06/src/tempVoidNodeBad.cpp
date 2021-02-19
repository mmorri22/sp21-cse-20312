#include <iostream>
#include <cstdlib>

#define COUT std::cout
#define ENDL std::endl

template<class T, class U>
void setNodeValues( void* reference, T firstVar, U secondVar ){
    
    *((T *)(reference)) = firstVar;
    
    reference = (T*)reference + sizeof(T);
	
    *((U *)(reference)) = secondVar;
    
}

template<class T, class U>
void printNodeValues( void* reference ){
    
    COUT << *((T *)(reference))  << ENDL;
    
    reference = (T*)reference + sizeof(T);
	
    COUT << *((U *)(reference)) << ENDL;
    
}

int main(void){
    
    long unsigned int nodeSize = sizeof(double) + sizeof(float);
    
    void* node = malloc( nodeSize );
    
    setNodeValues( node, -0.625, 1.5625 );
    
    printNodeValues<double, float>( node );
    
    free( node );

    return 0;
}