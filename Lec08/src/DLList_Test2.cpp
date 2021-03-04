#include "../inc/DLList.h"
#include "../inc/line.h"

#include <iostream>
#include <cstdlib> /* For exit(-1); */
#include <fstream> /* For std::ifstream */

#define COUT std::cout 
#define ENDL std::endl
#define IFSTREAM std::ifstream

int main( int argc, char** argv ){
	
	/* Check the input and create the file stream */
	if( argc != 2 ){
		
		COUT << "Incorrect number of inputs" << ENDL;
		exit(-1);
	}
	
	IFSTREAM in_stream( argv[1] );
	
	if( !in_stream ){
		
		COUT << argv[1] << " does not exist" << ENDL;
		exit(-1);		
		
	}
	
	/* Create the three Linked Lists */
	DLList< int > int_List;
	
	DLList< double > dbl_List;
	
	DLList< line > line_List;
	
	/* Create the temporary values */
	int temp_int;
	
	double temp_double;
	
	line temp_line;
	
	/* Iterate through the file */
	
	while( in_stream >> temp_int >> temp_double >> temp_line ){
		
		int_List.Insert( temp_int );
		
		dbl_List.Insert( temp_double );
		
		line_List.Insert( temp_line );
	}
	
	/* Print the lists */
	COUT << "Doubly Linked Lists - Data:" << ENDL;
	COUT << int_List << ENDL << ENDL;
	COUT << dbl_List << ENDL << ENDL;
	COUT << line_List << ENDL << ENDL;
	
	/* Print the node addresses */
	COUT << "Doubly Linked Lists - Structure:" << ENDL;
	COUT << ENDL << "int_List node addresses : ";
	int_List.printAddresses();
	COUT << ENDL;
	
	COUT << ENDL << "dbl_List node addresses : ";
	dbl_List.printAddresses();
	COUT << ENDL;	

	COUT << ENDL << "line_List node addresses: ";
	line_List.printAddresses();
	COUT << ENDL;	
	
	/* Close the file stream - Memory efficient */
	in_stream.close();
	
	return 0;
}