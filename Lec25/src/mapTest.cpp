#include <iostream>
#include <map>
#include <cmath>

#define COUT std::cout 
#define ENDL std::endl 
#define MAP std::map 

void func( MAP< int, double >& the_map, int val ){
    
    if( val > 1 ){
        
        func( the_map, val - 1 );
        
    }
    
    if( val % 3 == 0 ){
    
        the_map.insert( { pow(2, val), pow(2, val) } );
    
    }
    else{
        the_map.insert( { pow(2, val), val } );
    }
    
}

void func2( const MAP< int, double >& the_map ){
    
    for( std::pair<int, double> curr_pair : the_map ){
        
        COUT << curr_pair.first << " " << curr_pair.second << ENDL;
        
    }
    
}

int main()
{
    
    MAP< int, double > the_map;
    
    func( the_map, 6 );
    
    func2( the_map );

    return 0;
}