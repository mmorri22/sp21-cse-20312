#include <iostream>
#include <fstream>
#include <string>

#define CIN std::cin
#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream


int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob5.txt" );
	
	while( true ) {

		COUT << "Problem 5: SGiven the following three hash functions:" << ENDL;
		COUT << "h(k) = k mod 7" << ENDL;
		COUT << "h'(k) = |_k/7_| mod 7" << ENDL;
		COUT << "h''(k) = | k+|_k/7_| | mod 7" << ENDL;
		COUT << "show the insertion for the following elements in a Cuckoo Hash:" << ENDL;
		COUT << "24, 16, 17, 23, 65, 9" << ENDL;
		COUT << ENDL;
		
		COUT << "A.  " << ENDL;
		COUT << "0 -    ,  0 -    ,  0 -   " << ENDL;   
		COUT << "1 -    ,  1 -    ,  1 -    " << ENDL;  
		COUT << "2 -  16,  2 -    ,  2 -   " << ENDL;   
		COUT << "3 -  24,  3 -   9,  3 -   " << ENDL; 
		COUT << "4 -    ,  4 -  23,  4 - 17" << ENDL;
		COUT << "5 -    ,  5 -    ,  5 - " << ENDL; 
		COUT << "6 -    ,  6 -    ,  6 - 65" << ENDL;
		COUT << "" << ENDL;
		COUT << "B." << ENDL;
		COUT << "0 -    ,  0 -    ,  0 -    " << ENDL;  
		COUT << "1 -    ,  1 -    ,  1 -    " << ENDL;  
		COUT << "2 -  16,  2 -  17,  2 -  " << ENDL;    
		COUT << "3 -  24,  3 -  23,  3 -  " << ENDL;  
		COUT << "4 -    ,  4 -    ,  4 - 65" << ENDL;
		COUT << "5 -    ,  5 -    ,  5 -   " << ENDL;
		COUT << "6 -    ,  6 -    ,  6 - 9" << ENDL;
		COUT << "" << ENDL;
		COUT << "C." << ENDL;
		COUT << "0 -    ,  0 -    ,  0 -  " << ENDL;    
		COUT << "1 -    ,  1 -    ,  1 -  " << ENDL;    
		COUT << "2 -   9,  2 -  65,  2 -  " << ENDL;    
		COUT << "3 -  17,  3 -  23,  3 -   " << ENDL; 
		COUT << "4 -    ,  4 -    ,  4 - 16 " << ENDL;    
		COUT << "5 -    ,  5 -    ,  5 - " << ENDL;  
		COUT << "6 -    ,  6 -    ,  6 - 24" << ENDL;
		COUT << "" << ENDL;
		COUT << "D.  " << ENDL;
		COUT << "0 -    ,  0 -    ,  0 -" << ENDL;      
		COUT << "1 -    ,  1 -    ,  1 - " << ENDL;     
		COUT << "2 -   9,  2 -    ,  2 -" << ENDL;      
		COUT << "3 -  17,  3 -  24,  3 -" << ENDL;    
		COUT << "4 -    ,  4 -  23,  4 - 16" << ENDL;
		COUT << "5 -    ,  5 -    ,  5 -" << ENDL;   
		COUT << "6 -    ,  6 -    ,  6 - 65" << ENDL;
		COUT << "" << ENDL;
		
		char stu_answer;
		
		COUT << "Enter your choice (Like Linux, answer is case sensitive): ";
		CIN >> stu_answer;
		
		if( stu_answer == 'C' ){
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
