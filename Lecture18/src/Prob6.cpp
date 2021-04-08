#include <iostream>
#include <fstream>

#define CIN std::cin
#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream


int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob6.txt" );
	
	while( true ) {

		COUT << "Problem 6: Given the Binary Search Tree on the screen" << ENDL;
		COUT << "Select the Post-Order Traversal" << ENDL;
		COUT << ENDL;
		
		COUT << "A: 20 10 7 5 6 9 8 15 12 17 30 25 22 24 35" << ENDL;
		COUT << "B: 5 6 7 8 9 10 12 15 17 20 22 24 25 30 35" << ENDL;
		COUT << "C: 35 24 22 25 30 17 12 15 8 9 6 5 7 10 20" << ENDL;
		COUT << "D: 20 10 7 5 6 9 15 8 12 17 25 30 22 35 24" << ENDL;
		COUT << "E: 35 24 22 25 30 20 12 15 8 9 6 5 7 10 17" << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'C' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "15/15 towards Lecture 18 assignment" << ENDL;
			break;
		}
		
		else{
			COUT << "Incorrect choice. Please try again." << ENDL;
		}
		
	}

	file_out << "Student successfully answered Problem 6 correctly in class." << ENDL;

	// Close the file 
	file_out.close();	
	
	
}
