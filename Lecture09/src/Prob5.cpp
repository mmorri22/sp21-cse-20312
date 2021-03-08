#include <iostream>
#include <fstream>

#define COUT std::cout
#define CIN std::cin
#define ENDL std::endl
#define OFSTREAM std::ofstream

int main(){
	
	COUT << "What is the benefit of understanding the Amoritized run time of a data structure?"<< ENDL;

	COUT << "A. Design data structures that trade per-operation efficiency for overall efficiency." << ENDL;
	COUT << "B. Know when to not use a data structure based on the occasional bad operation" << ENDL;	
	COUT << "C. Prevent the implementation of Data Structures susceptible to unusual use" << ENDL;
	COUT << "D. Justify bizarre operations of your data structure" << ENDL;
	
	char input_val = ' ';
	char correct_val = 'A';
	
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
	std::ofstream Prob5( "Prob5.txt" );
	
	Prob5 << "Completed Problem 5" << std::endl;

	Prob5.close();
	
	return 0;
	
}