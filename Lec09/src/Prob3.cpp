#include <iostream>
#include <fstream>

#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl
#define OFSTREAM std::ofstream

int main(){
	
	COUT << "Given the following code segment, state the Big-O runtime:\n" << ENDL;

	COUT << "for(int i = 0; i < m; ++i){ " << ENDL;
	COUT << "	while(m > 0) " << ENDL;
	COUT << "		m /= 2; " << ENDL;
	COUT << "}" << ENDL;

	COUT << "A. O(n^2)	" << ENDL;
	COUT << "B. O(n * lg(n) )" << ENDL;	
	COUT << "C. O(n^2 * lg(n) )	" << ENDL;
	COUT << "D. O( lg(n) )	" << ENDL;
	
	char input_val = ' ';
	char correct_val = 'B';
	
	while( input_val != correct_val ){
		
		COUT << "" << ENDL;
		COUT << "Enter your choice (like Linux, answer is case sensitive): ";
		
		CIN >> input_val;
		
		if( input_val != correct_val ){
			
			COUT << input_val << " is not the correct answer" << ENDL;
		}
		
	}
	
	COUT << correct_val << " is correct" << ENDL;
	
	// Print successful output to file for Prob1.txt 
	std::ofstream Prob3( "Prob3.txt" );
	
	Prob3 << "Completed Problem 3" << std::endl;

	Prob3.close();
	
	return 0;
	
}