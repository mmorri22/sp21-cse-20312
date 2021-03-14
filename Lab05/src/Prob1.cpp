#include <iostream>
#include <vector>
#include <unordered_map>

#define COUT std::cout 
#define ENDL std::endl
#define VECTOR std::vector
#define UNOR_MAP std::unordered_map

template< class T >
bool checkDisjointFast( const VECTOR<T>& set1, const VECTOR<T>& set2 ){
    
    /* Part 2 Starts Here */


	/* Part 3 Starts Here */
	
}

template< class T >
bool runDisjoint( const VECTOR<T>& set1, const VECTOR<T>& set2 ){
    
    /* Part 1 Starts Here */

    
}

int main()
{
    VECTOR<int> set1{ 9, 2, 55, 18, 44, 19 };
    VECTOR<int> set2{ 22, 1, 7, 5, 10 };
    
    COUT << runDisjoint( set1, set2 ) << ENDL;
    
    VECTOR<int> set3{ 10, 1, 7, 22, 5 };
    VECTOR<int> set4{ 44, 2, 57, 6, 19, 7, 18 };
    
    COUT << runDisjoint( set3, set4 ) << ENDL;

    return 0;
}
