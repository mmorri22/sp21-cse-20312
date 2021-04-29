#include <iostream>
#include <map>
#include <stack>
#include <string>

template< class T, class U >
void func( std::map<T, U>& the_map ){

	for( const std::pair<T, U> the_pair : the_map ){

		std::cout << the_pair.first << " " << the_pair.second << std::endl;
		
	}
}

int main()
{

	std::map<int, std::string> the_map;

	the_map.insert( { 6, "name" } );
	the_map.insert( { 3, "echoes" } );
	the_map.insert( { 4, "cheering" } );
	the_map.insert( { 2, "the" } );
	the_map.insert( { 5, "her" } );
	the_map.insert( { 0, "Wake" } );
	the_map.insert( { 1, "up" } );
	
	func( the_map );

	return 0;

}
