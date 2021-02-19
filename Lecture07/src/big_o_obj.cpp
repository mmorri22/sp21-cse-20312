#include <iostream>

int main()
{
    
    long unsigned int length = 3;
    long unsigned int width = 4;
    
    int** array = new int*[length];
    
    for( long unsigned int iter = 0; iter < length; ++iter ){
        
        array[iter] = new int[width];
        
        for( long unsigned int jter = 0; jter < width; ++jter ){
        
            array[iter][jter] = (int) ( iter + jter );
        }
    }

    /* Only two pointer additions needed to get any element - O(1) */
    std::cout << array[1][2]<< std::endl;
    
    return 0;
}
