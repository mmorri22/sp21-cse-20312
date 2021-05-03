#include <iostream>
#include <fstream>
#include <string>

#define CIN std::cin
#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream
#define IFSTREAM std::ifstream
#define STRING std::string


int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob2.txt" );
	
	while( true ) {

		COUT << "Problem 2: Given the code segment, select the corresponding output." << ENDL;
		COUT << ENDL;
		
		IFSTREAM file_in( "src/setProb2.cpp" );
		STRING in_string;
		
		while( std::getline( file_in, in_string ) ){
			
			COUT << in_string << ENDL;
			
		}
		
		file_in.close();
		
		COUT << ENDL;
		COUT << "A: 1 2 3 4 5 8 16 32" << ENDL;
		COUT << "B: 1 1 2 3 4 4 5 8 16 32" << ENDL;
		COUT << "C: 5 4 3 2 1 1 4 8 16 32" << ENDL;
		COUT << "D: 5 4 3 2 1 8 16 32" << ENDL << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'A' ){
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
