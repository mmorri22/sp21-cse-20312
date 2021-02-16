#include <iostream>

// Procedural Level of Abstraction

int main()
{
    
    long unsigned int length = 3;
    long unsigned int width = 3;
    
    int** array = (int **)malloc( length * sizeof(int *) );
    
    for( long unsigned int iter = 0; iter < length; ++iter ){
        
        *( array + iter ) = (int *)malloc( width * sizeof(int) );
        
        
        for( long unsigned int jter = 0; jter < width; ++jter ){
        
            * ( *( array + iter ) + jter ) = (int) ( iter + jter );
        
        }
        
    }
    
    long unsigned int len_val = 1;
    long unsigned int width_val = 2;
    
    /* Only two pointer additions needed to get any element - O(1) */
    std::cout << * ( *( array + len_val ) + width_val ) << std::endl;
    
    return 0;
    
}
