#include <iostream>
#include <fstream>

#define CIN std::cin
#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream


int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob2.txt" );
	
	while( true ) {

		COUT << "Problem 1: Given a Red-Black Tree with the following insertions, select the final Red-Black Tree." << ENDL;
		COUT << ENDL;
		COUT << "Insertions: 30, 10, 20, 25, 35, 26, 27, 28" << ENDL << ENDL;
		
		COUT << "Review the diagrams at https://yld.me/bUg for the solution" << ENDL << ENDL;
		
		COUT << "A: See diagram" << ENDL;
		COUT << "B: See diagram" << ENDL;
		COUT << "C: See diagram" << ENDL;
		COUT << "D: See diagram" << ENDL << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'D' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "35/35 towards Lecture 22 assignment" << ENDL;
			break;
		}
		
		else{
			COUT << "Incorrect choice. Please try again." << ENDL;
		}
		
	}

	file_out << "Student successfully answered Problem 2 correctly in class." << ENDL;

	// Close the file 
	file_out.close();	
	
	
}
