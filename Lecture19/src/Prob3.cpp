#include <iostream>
#include <fstream>

#define CIN std::cin
#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream


int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob3.txt" );
	
	while( true ) {

		COUT << "Problem 3: Given the following insertions, select the final Level-Order Traversal representation of an AVL Tree" << ENDL;
		COUT << ENDL;
		COUT << "Insertions: 30, 20, 10, 45, 50, 55, 6, 5, 4" << ENDL;
		
		COUT << "A: 45 6 50 5 20 55 4 10 30" << ENDL;
		COUT << "B: 30 20 45 10 50 6 55 5 4" << ENDL;
		COUT << "C: 45 5 50 6 20 55 10 4 30" << ENDL;
		COUT << "D: 20 6 45 5 10 30 50 4 55" << ENDL << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'A' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "35/35 towards Lecture 19 assignment" << ENDL;
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
