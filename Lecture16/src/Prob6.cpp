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

		COUT << "Problem 3: You are given the following Adjacency List Representation of a Graph." << ENDL;
		COUT << "Select the corresponding Adjacency List Representation of its Minimum Spanning Tree starting at Node 0" << ENDL;
		COUT << "Each edge { A, B } is notated as { destination, weight }" << ENDL;
		COUT << ENDL;
		COUT << "Vertex\t\tList" << ENDL;
		COUT << "0 (A)\t\t{1, 5}, {2, 6}, {3, 7}, {5, 9}" << ENDL; 
		COUT << "1 (B)\t\t{3, 1}, {4, 7}"<< ENDL;
		COUT << "2 (C)\t\t{3, 4}, {4, 5}" << ENDL;
		COUT << "3 (D)\t\t{4, 2}" << ENDL;
		COUT << "4 (E)\t\t{5, 3}" << ENDL;
		COUT << "5 (F)\t\t" << ENDL << ENDL;
		
		COUT << "A: " << ENDL;
		COUT << "0 (A)\t\t{1, 5}, {2, 6}" << ENDL; 
		COUT << "1 (B)\t\t{3, 1}"<< ENDL;
		COUT << "2 (C)\t\t{3, 4}, {4, 5}" << ENDL;
		COUT << "3 (D)\t\t" << ENDL;
		COUT << "4 (E)\t\t{5, 3}" << ENDL;
		COUT << "5 (F)\t\t" << ENDL << ENDL;
		COUT << "B: " << ENDL;
		COUT << "0 (A)\t\t{1, 5}, {2, 6}" << ENDL; 
		COUT << "1 (B)\t\t{3, 1}"<< ENDL;
		COUT << "2 (C)\t\t{3, 4}" << ENDL;
		COUT << "3 (D)\t\t" << ENDL;
		COUT << "4 (E)\t\t{5, 3}" << ENDL;
		COUT << "5 (F)\t\t" << ENDL << ENDL;
		COUT << "C: " << ENDL;
		COUT << "0 (A)\t\t{1, 5}, {2, 6}, {5, 9}" << ENDL; 
		COUT << "1 (B)\t\t{3, 1}"<< ENDL;
		COUT << "2 (C)\t\t{4, 5}" << ENDL;
		COUT << "3 (D)\t\t" << ENDL;
		COUT << "4 (E)\t\t" << ENDL;
		COUT << "5 (F)\t\t" << ENDL << ENDL;
		COUT << "D: " << ENDL;
		COUT << "0 (A)\t\t{1, 5}, {2, 6}" << ENDL; 
		COUT << "1 (B)\t\t{3, 1}"<< ENDL;
		COUT << "2 (C)\t\t" << ENDL;
		COUT << "3 (D)\t\t{4, 2}" << ENDL;
		COUT << "4 (E)\t\t{5, 3}" << ENDL;
		COUT << "5 (F)\t\t" << ENDL << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'D' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "30/30 towards Lecture 16 assignment" << ENDL;
			break;
		}
		
		else{
			COUT << "Incorrect choice. Please try again." << ENDL;
		}
		
	}

	file_out << "Student successfully answered Problem 3 correctly in class." << ENDL;

	// Close the file 
	file_out.close();	
	
	
}
