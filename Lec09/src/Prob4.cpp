#include <iostream>
#include <fstream>

#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl
#define OFSTREAM std::ofstream

int main(){
	
	COUT << "Given a set of ten operations, where 8 of the operations take 0.5 seconds, and 2 operations take 3 seconds, what is the amoritized case for these operations?"<< ENDL;

	COUT << "A. 3 seconds" << ENDL;
	COUT << "B. 2 seconds" << ENDL;	
	COUT << "C. 1 second" << ENDL;
	COUT << "D. 0.5 seconds" << ENDL;
	
	char input_val = ' ';
	char correct_val = 'C';
	
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
	std::ofstream Prob4( "Prob4.txt" );
	
	Prob4 << "Completed Problem 4" << std::endl;

	Prob4.close();
	
	return 0;
	
}