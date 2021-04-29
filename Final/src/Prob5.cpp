#include <iostream>
#include <set>
#include <stack>

template< class T >
void func( std::multiset<T>& the_set, std::stack<T>& the_stack ){

	for( const T theVal : the_set ){

		the_stack.push( theVal );
	}

	while( !the_stack.empty() ){

		std::cout << the_stack.top() << " ";
		the_stack.pop();
	}
	std::cout << std::endl;
}

int main()
{

	std::multiset<int> the_set;
	std::stack<int> the_stack;

	the_set.insert(35); the_set.insert(10); the_set.insert(15); 
	the_set.insert(22); the_set.insert(7); the_set.insert(31); 
	the_set.insert(44); the_set.insert(19); the_set.insert(8); 
	the_set.insert(35); the_set.insert(7); the_set.insert(8); 

	func( the_set, the_stack );

	return 0;

}
