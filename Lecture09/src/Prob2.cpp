#include <iostream>
#include <fstream>

#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl
#define OFSTREAM std::ofstream

int main(){
	
	COUT << "Given the following code segment, state the Big-O runtime:\n" << ENDL;

	COUT << "for(int i = 0; i < m; ++i){" << ENDL;
	COUT << "" << ENDL;
	COUT << "     for(int j = 0; j < n; ++j){" << ENDL;
	COUT << "" << ENDL;
	COUT << "           while(p > 0)" << ENDL;
	COUT << "                  p /= 2;" << ENDL;
	COUT << "     }" << ENDL;
	COUT << "}" << ENDL;
	COUT << "" << ENDL;
	COUT << "A. O(n^2)	" << ENDL;
	COUT << "B. O(n * lg(n) )" << ENDL;	
	COUT << "C. O(n^2 * lg(n) )	" << ENDL;
	COUT << "D. O( lg(n) )	" << ENDL;
	
	char input_val = ' ';
	
	while( input_val != 'C' ){
		
		COUT << "" << ENDL;
		COUT << "Enter your choice (like Linux, answer is case sensitive): ";
		
		CIN >> input_val;
		
		if( input_val != 'C' ){
			
			COUT << input_val << " is not the correct answer" << ENDL;
		}
		
	}
	
	COUT << "C is correct" << ENDL;
	
	// Print successful output to file for Prob1.txt 
	std::ofstream Prob2( "Prob2.txt" );
	
	Prob2 << "Completed Problem 2" << std::endl;

	Prob2.close();
	
	return 0;
	
}