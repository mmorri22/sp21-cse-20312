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

		COUT << "Problem 2: You are given the following Adjacency List Representation of a Graph." << ENDL;
		COUT << "Select the shortest path between 0 and 7" << ENDL;
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
		
		COUT << "A: 0->1->4->7" << ENDL;
		COUT << "B: 0->1->5->7" << ENDL;
		COUT << "C: 0->2->6->7" << ENDL;
		COUT << "D: 0->3->2->3->7" << ENDL;
		COUT << "E: 0->3->6->7" << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'E' ){
			COUT << "Correct Answer!" << ENDL;
			COUT << "25/25 towards Lecture 18 assignment" << ENDL;
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
