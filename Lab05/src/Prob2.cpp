#include <iostream>
#include <fstream>
#include <unordered_map>	// Hash Table
#include <vector>			// Dynamic Array
#include <forward_list>		// Singly Linked List 
#include <string>			// Dynamic Array of Characters
#include <iterator>			// For iterating through the Hash

/********************************************
* Function Name  : getAndCheckFile
* Pre-conditions : std::ifstream& fileStream, std::string fileName
* Post-conditions: none
* 
* Verifies a valid file and returns an input stream
********************************************/
void getAndCheckFile(std::ifstream& fileStream, const std::string& fileName){
	
	fileStream.open(fileName);
	
	if(!fileStream.is_open()){
		
		std::cout << "The file " << fileName << " does not exist. Exiting Program..." << std::endl;
		exit(-1);
		
	}
	
}

/********************************************
* Function Name  : getDictionaryWords
* Pre-conditions : std::ifstream& dictionaryFile, std::forward_list< std::string >& dictionaryList
* Post-conditions: none
*  
* This function reads all the dictionary words, and stores them in a STL Doubly Linked List 
********************************************/
void getDictionaryWords(std::ifstream& dictionaryFile, std::forward_list< std::string >& dictionaryList){
	
	// Get the strings and put in the List
	std::string wordIn;
	
	while (dictionaryFile >> wordIn)
	{
		dictionaryList.push_front(wordIn);
	}
}

/********************************************
* Function Name  : HashLicense
* Pre-conditions : std::unordered_map< char, int >& HashPlate, char* plate
* Post-conditions: none
* 
* Stores the value of the hash values in the HashMap  
********************************************/
void HashLicense(std::unordered_map< char, int >& HashPlate, const std::string& plate){
	
	/* Problem 2 - Part 1 Starts Here */
	
}

/********************************************
* Function Name  : HashWord
* Pre-conditions : std::unordered_map< char, int >& HashPlate, std::string currWord, std::string& finalWord
* Post-conditions: none
*  
********************************************/
void HashWord(std::unordered_map< char, int >& HashPlate, const std::string& currWord, std::string& finalWord){
	
	// Create a temporary Hash for the current work 
	std::unordered_map< char, int > HashWord;
	
	for( const char curr_char : currWord ){

		// words.txt contains all uppercase, but some words may contain numbers 
		if((int)curr_char >= 65 && (int)curr_char <= 90){
			
			if(HashWord.count( curr_char ) == 0){
				
				// Put the word in, and set the count to 1
				HashWord.insert( { curr_char, 1} );
			}
			else{
				// Increment the count 
				HashWord[ curr_char ]++;
			} 
		}		
		
	}


	/* Problem 2 - Part 2 Starts Here */
	
}

void checkPlate(std::forward_list< std::string >& dictionaryList, const std::string& plateStr){
	
	// Get and Hash License Plate
	std::unordered_map< char, int > HashPlate;
	
	// Hash the values of the characters in the license plate  
	HashLicense(HashPlate, plateStr);

	// Set the string where the final word (solution) will be stored
	std::string finalWord;
	
	// Iterate through each word in the dictionary 
	for(std::string currWord : dictionaryList){
		
		// Check the word, and update final word if it qualifies
		// Do not hash currWord if final Word is the same length - Save run time 
		// Must also account for if no word is found yet (finalWord.length() > 0)
		if(currWord.length() <= finalWord.length() || finalWord.length() == 0)
			HashWord(HashPlate, currWord, finalWord);
	}
	
	// Print the result to the user 
	std::cout << "Shortest Word in Dictionary with characters in " 
		<< plateStr << " is " << finalWord << std::endl;
	
}

/********************************************
* Function Name  : main
* Pre-conditions : int argc, char** argv
* Post-conditions: int
*
* Main driver function for the program  
********************************************/
int main(int argc, char** argv){
	
	// Create a Doubly Linked list of dictionary words 
	std::forward_list< std::string > dictionaryList;
	
	// Get the inputstream
	std::ifstream dictionaryFile;
	
	// Get and check file
	if(argc == 2){
		getAndCheckFile(dictionaryFile, argv[1]);
	}
	else{
		std::cout << "Number of inputs are wrong" << std::endl;
		std::cout << "exe/./Prob2 [DictionaryFile]" << std::endl;
		exit(-1);
	}

	// Get the strings and put in the List
	getDictionaryWords(dictionaryFile, dictionaryList);

	// Close the ifstream
	dictionaryFile.close();
	
	// In C++11, conversion from char* to string is depricated. Must do it here
	checkPlate(dictionaryList, "RCT100SA");
	checkPlate(dictionaryList, "RT123SO");
	checkPlate(dictionaryList, "AQ10S0K");
	checkPlate(dictionaryList, "TNT055RB");
	checkPlate(dictionaryList, "LET10EE0");
	checkPlate(dictionaryList, "RC10014");
	checkPlate(dictionaryList, "AEI1O2U3");
	checkPlate(dictionaryList, "OTR1N2E3");
	checkPlate(dictionaryList, "AM1E2D3");
	checkPlate(dictionaryList, "SHR5I3I3");

	return 0;

}

