#include <iostream>
#include <fstream>

#define CIN std::cin
#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream


int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob1.txt" );
	
	while( true ) {

		COUT << "Problem 1: Consider a B-Tree with a maximum degree of 4 and a minimum degree of 2. What is the final result of the following insertions" << ENDL;
		COUT << ENDL;
		COUT << "Insertions: 10, 6, 7, 5, 4, 12, 11" << ENDL << ENDL;
		
		COUT << "Review the diagrams at https://yld.me/dV2m for the solution" << ENDL << ENDL;
		
		COUT << "A: See diagram" << ENDL;
		COUT << "B: See diagram" << ENDL;
		COUT << "C: See diagram" << ENDL;
		COUT << "D: See diagram" << ENDL << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'A' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "25/25 towards Lecture 20 assignment" << ENDL;
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
