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

		COUT << "Problem 1: You are given the following Adjacency List Representation of a Graph." << ENDL;
		COUT << "Select the resulting Minimum Spanning Tree" << ENDL;
		COUT << "Notation is (destin, weight)" << ENDL;
		COUT << ENDL;
		COUT << "Vertex\t\tList" << ENDL;
		COUT << "0 (A)\t\t(1,6), (2,4), (3,5)" << ENDL;
		COUT << "1 (B)\t\t(2,5), (4,3), (5,6)" << ENDL;
		COUT << "2 (C)\t\t(5,7), (6,4)" << ENDL;
		COUT << "3 (D)\t\t(2,3), (4,4), (6,2)" << ENDL;
		COUT << "4 (E)\t\t(7,5)" << ENDL;
		COUT << "5 (F)\t\t(4,2), (6,5), (7,4)" << ENDL;
		COUT << "6 (G)\t\t(7,3)" << ENDL;
		COUT << "7 (H)" << ENDL << ENDL;
		
		COUT << "A:" << ENDL;
		COUT << "0 (A)\t\t(2,4)" << ENDL;
		COUT << "1 (B)\t\t(4,3)" << ENDL;
		COUT << "2 (C)\t\t(6,4)" << ENDL;
		COUT << "3 (D)\t\t(2,3)" << ENDL;
		COUT << "4 (E)\t\t(7,5)" << ENDL;
		COUT << "5 (F)\t\t(4,2)" << ENDL;
		COUT << "6 (G)\t\t(7,3)" << ENDL;
		COUT << "7 (H)" << ENDL;
		COUT << "B:" << ENDL;
		COUT << "0 (A)\t\t(1,6), (3,5)" << ENDL;
		COUT << "1 (B)\t\t(5,6)" << ENDL;
		COUT << "2 (C)\t\t" << ENDL;
		COUT << "3 (D)\t\t(2,3), (6,2)" << ENDL;
		COUT << "4 (E)\t\t" << ENDL;
		COUT << "5 (F)\t\t(4,2)" << ENDL;
		COUT << "6 (G)\t\t(7,3)" << ENDL;
		COUT << "7 (H)" << ENDL;
		COUT << "C:" << ENDL;
		COUT << "0 (A)\t\t(1,6), (3,5)" << ENDL;
		COUT << "1 (B)\t\t" << ENDL;
		COUT << "2 (C)\t\t(5,7)" << ENDL;
		COUT << "3 (D)\t\t(2,3)" << ENDL;
		COUT << "4 (E)\t\t(7,5)" << ENDL;
		COUT << "5 (F)\t\t(4,2), (6,5)" << ENDL;
		COUT << "6 (G)\t\t" << ENDL;
		COUT << "7 (H)" << ENDL;
		COUT << "D:" << ENDL;
		COUT << "0 (A)\t\t(1,6), (3,5)" << ENDL;
		COUT << "1 (B)\t\t(5,6)" << ENDL;
		COUT << "2 (C)\t\t(6,4)" << ENDL;
		COUT << "3 (D)\t\t(2,3)" << ENDL;
		COUT << "4 (E)\t\t" << ENDL;
		COUT << "5 (F)\t\t(4,2)" << ENDL;
		COUT << "6 (G)\t\t(7,3)" << ENDL;
		COUT << "7 (H)" << ENDL << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'B' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "35/35 towards Lecture 18 assignment" << ENDL;
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
