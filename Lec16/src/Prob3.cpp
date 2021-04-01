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

		COUT << "Problem 3: You are given the following Adjacency List Representation of a Graph." << ENDL;
		COUT << "Select the corresponding Adjacency List Representation of its Topological Sort starting at Node 0" << ENDL;
		COUT << ENDL;
		COUT << "Vertex\t\tList" << ENDL;
		COUT << "0 (45)\t\t3, 1, 2" << ENDL; 
		COUT << "1 (-7)\t\t4, 2" << ENDL;
		COUT << "2 (34)\t\t1, 5" << ENDL;
		COUT << "3 (18)\t\t1, 2, 5" << ENDL;
		COUT << "4 (10)\t\t" << ENDL;
		COUT << "5 (-18)\t\t7, 6" << ENDL;
		COUT << "6 (-6)\t\t8, 9" << ENDL;
		COUT << "7 (-81)\t\t8, 9" << ENDL;
		COUT << "8 (19)\t\t5, 9" << ENDL;
		COUT << "9 (4)" << ENDL << ENDL;
		
		COUT << "A: " << ENDL;
		COUT << "0 (45)\t\t3" << ENDL; 
		COUT << "1 (-7)\t\t4, 2" << ENDL;
		COUT << "2 (34)\t\t5" << ENDL;
		COUT << "3 (18)\t\t1" << ENDL;
		COUT << "4 (10)\t\t" << ENDL;
		COUT << "5 (-18)\t\t7, 6" << ENDL;
		COUT << "6 (-6)\t\t" << ENDL;
		COUT << "7 (-81)\t\t8" << ENDL;
		COUT << "8 (19)\t\t9" << ENDL;
		COUT << "9 (4)" << ENDL << ENDL;
		COUT << "B: " << ENDL;
		COUT << "0 (45)\t\t1, 2" << ENDL; 
		COUT << "1 (-7)\t\t2, 4" << ENDL;
		COUT << "2 (34)\t\t5" << ENDL;
		COUT << "3 (18)\t\t1" << ENDL;
		COUT << "4 (10)\t\t" << ENDL;
		COUT << "5 (-18)\t\t7, 6" << ENDL;
		COUT << "6 (-6)\t\t8" << ENDL;
		COUT << "7 (-81)\t\t" << ENDL;
		COUT << "8 (19)\t\t9" << ENDL;
		COUT << "9 (4)" << ENDL << ENDL;
		COUT << "C: " << ENDL;
		COUT << "0 (45)\t\t3, 1" << ENDL; 
		COUT << "1 (-7)\t\t4, 2" << ENDL;
		COUT << "2 (34)\t\t" << ENDL;
		COUT << "3 (18)\t\t5" << ENDL;
		COUT << "4 (10)\t\t" << ENDL;
		COUT << "5 (-18)\t\t7, 6" << ENDL;
		COUT << "6 (-6)\t\t" << ENDL;
		COUT << "7 (-81)\t\t8" << ENDL;
		COUT << "8 (19)\t\t9" << ENDL;
		COUT << "9 (4)" << ENDL << ENDL;
		COUT << "D: " << ENDL;
		COUT << "0 (45)\t\t3, 1, 2" << ENDL; 
		COUT << "1 (-7)\t\t4" << ENDL;
		COUT << "2 (34)\t\t" << ENDL;
		COUT << "3 (18)\t\t5" << ENDL;
		COUT << "4 (10)\t\t" << ENDL;
		COUT << "5 (-18)\t\t7, 6" << ENDL;
		COUT << "6 (-6)\t\t" << ENDL;
		COUT << "7 (-81)\t\t8, 9" << ENDL;
		COUT << "8 (19)\t\t" << ENDL;
		COUT << "9 (4)" << ENDL << ENDL;
		COUT << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'A' ){
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
