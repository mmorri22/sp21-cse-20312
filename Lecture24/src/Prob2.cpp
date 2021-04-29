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

		COUT << "Given a Splay Tree and the following insertions and accesses, select the final Splay Tree" << ENDL;
		COUT << ENDL;
		COUT << "Insertions: 10, 7, 15, 8, 12, 16, 11" << ENDL;
		COUT << "Accesses  : 8, 13, 11" << ENDL << ENDL;
		
		COUT << "Review the diagrams at https://yld.me/cYzT for the solution" << ENDL << ENDL;
		
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
			COUT << "35/35 towards Lecture 24 assignment" << ENDL;
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
