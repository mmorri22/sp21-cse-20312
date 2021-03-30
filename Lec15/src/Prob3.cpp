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

		COUT << "Problem 3: You are given the following Adjacency List Representation." << ENDL;
		COUT << "Select the path that will result from a Depth-First Search from 0 to 6" << ENDL;
		COUT << ENDL;
		COUT << "Vertex\t\tList" << ENDL;
		COUT << "0 (31)\t\t1, 3, 6" << ENDL; 
		COUT << "1 (18)\t\t3, 2, 5" << ENDL;
		COUT << "2 (7)\t\t5" << ENDL;
		COUT << "3 (-2)\t\t4, 2" << ENDL;
		COUT << "4 (8)\t\t2, 5" << ENDL;
		COUT << "5 (7)\t\t6" << ENDL;
		COUT << "6 (88)" << ENDL << ENDL;
		
		COUT << "A: 0->6" << ENDL;
		COUT << "B: 0->1->2->5->6" << ENDL;
		COUT << "C: 0->1->3->4->5->6" << ENDL;
		COUT << "D: 0->1->3->4->2->5->6" << ENDL;
		COUT << "E: 0->1->5->6" << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'D' ){
			COUT << "Correct Answer!" << ENDL;
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