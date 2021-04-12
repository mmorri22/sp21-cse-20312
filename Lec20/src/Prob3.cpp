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

		COUT << "Problem 3: Given a B-Tree with a Max Degree of 3 and a Min Degree of 1, as well as the following insertions and deletions, select the final B-Tree." << ENDL;
		COUT << ENDL;
		COUT << "Insertions: 15, 7, 22, 26, 24, 17, 4, 21" << ENDL;
		COUT << "Deletions: 21, 24" << ENDL << ENDL;
		
		COUT << "Review the diagrams at https://yld.me/dV2m for the solution" << ENDL << ENDL;
		
		COUT << "A: See diagram" << ENDL;
		COUT << "B: See diagram" << ENDL;
		COUT << "C: See diagram" << ENDL;
		COUT << "D: See diagram" << ENDL << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'B' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "35/35 towards Lecture 20 assignment" << ENDL;
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
