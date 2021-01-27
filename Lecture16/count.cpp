#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector
#define STRING std::string

template< class T >
void count_vec( VECTOR< T >& the_vec, T value ){
	
	COUT << value << " appears ";
	COUT << count(the_vec.begin(), the_vec.end(), value );
	COUT << " times." << ENDL;
	   
}


void count_str( STRING& the_String, char value ){
	
	COUT << "'" << value << "' appears "; 
	COUT << count(the_String.begin(), the_String.end(), value );
	COUT << " times in " << the_String << "." << ENDL;
	   
}

int main (int, char * []) {

	VECTOR<int> v_int;
	v_int.push_back(1);
	v_int.push_back(2);
	v_int.push_back(3); 
	v_int.push_back(2);

	int i = 7;
	int j = 1;
	int k = 2;

	count_vec( v_int, i );
	count_vec( v_int, j );
	count_vec( v_int, k );

	/* To show genericity, use count with std::string */
	STRING the_String("Notre Dame Fighting Irish");
	count_str( the_String, 'i' );
	count_str( the_String, 'r' );
	count_str( the_String, ' ' );

  return 0;
}
