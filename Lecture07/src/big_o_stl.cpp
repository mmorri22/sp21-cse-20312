#include <iostream>
#include <vector>

#define VECTOR std::vector

int main()
{
    
    long unsigned int length = 3;
    long unsigned int width = 4;
    
    VECTOR< VECTOR<int> > dyn_array( length );
    
    for( long unsigned int iter = 0; iter < length; ++iter ){
        
        for( long unsigned int jter = 0; jter < width; ++jter ){
        
            dyn_array.at(iter).push_back( (int) ( iter + jter ) );
        }
    }

    std::cout << dyn_array.at(1).at(2) << std::endl;
    
    return 0;
}
