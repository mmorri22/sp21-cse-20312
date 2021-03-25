#include <iostream>
#include <fstream>
#include <string>
#include "../inc/SLList.h"

#define COUT std::cout 
#define ENDL std::endl
#define OFSTREAM std::ofstream
#define STRING std::string

int main() {
	
	// Output stream 
	OFSTREAM out( "Prob4.txt" );
	
	// Initial List
	SLList< int > list1;
	list1.Insert( 1 ); list1.Insert( 2 ); 
	list1.Insert( 3 ); list1.Insert( 4 );
	
	// Use the SLList copy constructor
	SLList< int > list2( list1 );
	list2.Insert( 5 ); list2.Insert( 6 );
	list2.Insert( 7 );
	
	// Template with string
	SLList< STRING > list3;
	list3.Insert( "Wake" ); list3.Insert( "the" ); 
	list3.Insert( "cheering" ); list3.Insert( "name" );
	list3.Insert( "her" ); list3.Insert( "echoes" ); 
	list3.Insert( "up" );
	
	// Print the initial lists 
	out << list1 << ENDL;
	out << list2 << ENDL;
	out << list3 << ENDL;
	
	// Reorder the lists 
	list1.reorderList();
	out << "Re-order - list1 result: " << list1 << ENDL;
	
	list2.reorderList();
	out << "Re-order - list2 result: " << list2 << ENDL;
	
	list3.reorderList();
	out << "Re-order - list3 result: " << list3 << ENDL;
	
	
	// Close the file 
	out.close();
	
	return 0;
}
