#include <iostream>
#include <set>
#include <string>
#include <cmath>

#define COUT std::cout
#define ENDL std::endl
#define SET std::set

void func( SET< int >& printTree, int value ){
	
	if( value > 0 ){
		
		printTree.insert( value );
		
		func( printTree, value - 1 );
		
	}
	
	printTree.insert( (int) pow(2, value) );
	
}

void func2(const SET< int >& printTree){
	
	for(const int& curr : printTree){
		
		std::cout << curr << " ";
		
	}
	std::cout << std::endl;
	
}

int main(){
	
	SET< int > intTree;
	
	func( intTree, 5 );
	
	func2( intTree );
	
	return 0;
}

