#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector
#define OFSTREAM std::ofstream
#define STRING std::string

/* Problem 1 code starts here */
template< class T >
int findMin( const VECTOR<T>& the_vec, OFSTREAM& out, int min, int max ){
	
	if( max == min )
		return max;
	
	int mid = min + ( max - min ) / 2;
	
	out << min << " " << max << " " << mid << ENDL;
	
	if( the_vec.at( min ) < the_vec.at( mid ) ){
		
		int comp = findMin( the_vec, out, mid, max );
		
		return ( the_vec.at( min ) < the_vec.at( comp ) ) ? min : comp ;
	}

	else{ // if( the_vec.at( max ) > the_vec.at( mid ) ){
		
		int comp = findMin( the_vec, out, min, mid );
		
		return ( the_vec.at( max ) < the_vec.at( comp ) ) ? max : comp ;		
	}
}

template< class T >
void rotateVec( VECTOR<T>& the_vec, int x ){
	
	VECTOR<T> temp_vec;
	
	for( int value = x; value < (int)the_vec.size(); ++value ){
		
		temp_vec.push_back( the_vec.at( value ) );
		
	}
	
	for( int value = 0; value < x; ++value ){
		
		temp_vec.push_back( the_vec.at( value ) );
		
	}
	
	the_vec.clear();
	
	the_vec = temp_vec;
	
}

template< class T >
void printVec( const VECTOR<T>& the_vec, OFSTREAM& out ){
	
	for( T current : the_vec ){
		
		out << current << " ";
	}
	out << ENDL << ENDL;
}

void runTests(OFSTREAM& out){
	
	
	VECTOR<char> char_vec{ 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm' };
	
	VECTOR< STRING > str_vec{ "Aardvark", "Beaver", "Chimpanzee", "Donkey", "Elephant", "Frog", "Goat" };
	
	/* Test char version */
	out << "---------------------------------------------\n";
	printVec( char_vec, out );
	rotateVec( char_vec, 7 );
	printVec( char_vec, out );
	
	int char_result = findMin( char_vec, out, 0, (int)char_vec.size() - 1 );
	
	out << "\nSolution: " << char_result << " " << char_vec.at(char_result) << ENDL;
	
	/* Test std::string version */
	out << "---------------------------------------------\n";
	printVec( str_vec, out );
	rotateVec( str_vec, 3 );
	printVec( str_vec, out );
	
	int str_result = findMin( str_vec, out, 0, (int)str_vec.size() - 1 );
	
	out << "\nSolution: " << str_result << " " << str_vec.at(str_result) << ENDL;
	
}

int main(){
	
	VECTOR<int> the_vec;
	OFSTREAM out( "Prob1.txt" );
	
	int begin = 12;
	int end = 10000;
	int rotate = 107;
	
	for( int iter = begin; iter <= end; ++iter){
		the_vec.push_back( iter );
	}
	
	printVec( the_vec, out );
	
	rotateVec( the_vec, rotate );
	
	printVec( the_vec, out );
	
	int result = findMin( the_vec, out, 0, (int)the_vec.size() - 1 );
	
	out << "\nSolution: " << result << " " << the_vec.at(result) << ENDL;
	
	// Run templated tests 
	runTests( out );
	
	out.close();
	
	return 0;
}