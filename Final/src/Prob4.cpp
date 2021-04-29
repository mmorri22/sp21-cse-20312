#include <iostream>
#include <set>
#include <vector>

template< class T >
void func( std::vector<T>& the_vector ){
    
    std::set<T> the_set;
    
    for( T theVal : the_vector ){
        
        if( the_set.count( theVal ) == 0 )
            the_set.insert( theVal );
            
        else
            the_set.erase( theVal );
        
    }
    
    for( const T theVal : the_set ){
        
        std::cout << theVal << " ";
        
    }
    std::cout << std::endl;
    
}

int main()
{
    
    std::vector<int> the_vector;
    
    the_vector.push_back(10); the_vector.push_back(2); the_vector.push_back(8); 
    the_vector.push_back(8); the_vector.push_back(5); the_vector.push_back(3); 
    the_vector.push_back(2); the_vector.push_back(3); the_vector.push_back(10); 
    
    func( the_vector );
    
    return 0;
    
}