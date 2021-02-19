#include "../include/A_1.h"

#define COUT std::cout
#define ENDL std::endl

int main()  { 

	/* Initialize A objects */
	COUT << "Allocating dblA (double, double)..." << ENDL;
	A<double, double> dblA;
	
	COUT << "Allocating dblA (char, char)..." << ENDL;
	const A<char, char> a('G', 72); 
   
    COUT << "Allocating b (int, char)..." << ENDL;
	A<int, char> b(71, 'H'); 
   
	COUT << "Allocating c (float, double)..." << ENDL;
	A<double, float> c( 10, (float)-35.7 );
   
	/* Print the address of each object */
	COUT << "Address of dblA on the heap from main: " << &dblA << ENDL;
	COUT << "Address of a on the heap from main   : " << &a << ENDL;
	COUT << "Address of b on the heap from main   : " << &b << ENDL;
	COUT << "Address of c on the heap from main   : " << &c << ENDL;
   
	return 0; 
} 


