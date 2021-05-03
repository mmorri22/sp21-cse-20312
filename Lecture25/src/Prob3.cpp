#include <iostream>
#include <fstream>
#include <string>

#define CIN std::cin
#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream


int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob3.txt" );
	
	while( true ) {

		COUT << "Problem 3: Select the resulting Binomial Heap after the following insertions and removal:" << ENDL;
		COUT << "A, H, B, G, C, F, D, E" << ENDL;
		COUT << ENDL;
		
		COUT << "Go to https://yld.me/bqL7 for the Lecture 25 diagrams for this Problem" << ENDL;
		COUT << "A: Image on Website" << ENDL;
		COUT << "B: Image on Website" << ENDL;
		COUT << "C: Image on Website" << ENDL;
		COUT << "D: Image on Website" << ENDL << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'C' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "30/30 towards Lecture 25 assignment" << ENDL;
			break;
		}
		
		else{
			COUT << "Incorrect choice. Please try again." << ENDL;
		}
		
	}

	file_out << "Student successfully answered Problem 1 correctly in class." << ENDL;

	// Close the file 
	file_out.close();	
	
	
}
