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
	OFSTREAM file_out( "Prob1.txt" );
	
	while( true ) {

		COUT << "Problem 1: Given the code segment, select the corresponding output." << ENDL;
		COUT << ENDL;
		
		IFSTREAM file_in( "src/mapTest.cpp" );
		STRING in_string;
		
		while( std::getline( file_in, in_string ) ){
			
			COUT << in_string << ENDL;
			
		}
		
		file_in.close();
		
		COUT << ENDL;
		COUT << "A: " << ENDL;
		COUT << "   1 2" << ENDL;
		COUT << "   2 4" << ENDL;
		COUT << "   8 8" << ENDL;
		COUT << "   4 16" << ENDL;
		COUT << "   5 32" << ENDL;
		COUT << "   64 64" << ENDL;
		COUT << "B: " << ENDL;
		COUT << "   1 2" << ENDL;
		COUT << "   2 4" << ENDL;
		COUT << "   4 16" << ENDL;
		COUT << "   5 32" << ENDL;
		COUT << "   8 8" << ENDL;
		COUT << "   64 64" << ENDL;
		COUT << "C: " << ENDL;
		COUT << "   2 1" << ENDL;
		COUT << "   4 2" << ENDL;
		COUT << "   16 4" << ENDL;
		COUT << "   32 5" << ENDL;
		COUT << "   8 8" << ENDL;
		COUT << "   64 64" << ENDL;
		COUT << "D: " << ENDL;
		COUT << "   2 1" << ENDL;
		COUT << "   4 2" << ENDL;
		COUT << "   8 8" << ENDL;
		COUT << "   16 4" << ENDL;
		COUT << "   32 5" << ENDL;
		COUT << "   64 64" << ENDL << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'D' ){
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
