#include <iostream>
#include <fstream>

#define CIN std::cin
#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream


int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob4.txt" );
	
	while( true ) {

		COUT << "Select the resulting Treap from the following insertion and probability combinations, and the following deletion, with char as the type, and int as the probability" << ENDL;
		COUT << ENDL;
		COUT << "Insertions: {D, 10}, {E, 47}, {F, 18}, (A, 37}, {C, 92}, {B, 7}, {G, 35}" << ENDL;
		COUT << "Accesses  : {C, 92}" << ENDL << ENDL;
		
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
			COUT << "30/30 towards Lecture 24 assignment" << ENDL;
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
