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

		COUT << "Problem 1: Given the following insertions and deletions, select the final Level-Order Traversal representation of a Binary Search Tree" << ENDL;
		COUT << ENDL;
		COUT << "Insertions: 22, 17, 19, 34, 8, 31, 36, 7" << ENDL;
		COUT << "Deletions : 22, 34" << ENDL << ENDL;
		
		COUT << "A: 19 17 31 8 7 36" << ENDL;
		COUT << "B: 19 17 31 8 36 7" << ENDL;
		COUT << "C: 19 17 8 7 31 36" << ENDL;
		COUT << "D: 36 31 7 8 17 19" << ENDL << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'B' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "25/25 towards Lecture 19 assignment" << ENDL;
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
