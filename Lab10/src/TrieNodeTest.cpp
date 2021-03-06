#include "../include/TrieNode.h"

#include <iostream>
#include <string>
#include <fstream>

#define COUT std::cout
#define ENDL std::endl
#define STRING std::string
#define OFSTREAM std::ofstream

void addString( TrieNode*& theNode, const std::string& word, unsigned int value ){
	
	/* Part 4 - Starts Here */

	
}


void printTriePreOrder( TrieNode* theNode, unsigned int level ){

	// If we've reached the end, return 
	if( theNode == NULL ){
		return;
	}
	
	// Otherwise, recursively call
	for(unsigned int iter = 0; iter < NumASCII; iter++){
		
		if( theNode->childNodes[iter].validLetter ){
		
			COUT << '{' << (char)iter << " - " << level << "} ";
		
			TrieNode* nextLevel = &theNode->childNodes[ iter ];
		
			printTriePreOrder( nextLevel, level + 1 );
			
		}
	}
	
}

int main(){
	
	// Create the output stream 
	OFSTREAM file_out( "Prob2.txt" );
	
	STRING CAN("CAN");
	STRING CANDY("CANDY");
	STRING COUNT("COUNT");
	STRING COULD("COULD");
	STRING FIT("FIT");
	STRING FAST("FAST");
	STRING FASTER("FASTER");
	STRING FAT("FAT");
	STRING FOX("FOX");
	STRING FOUND("FOUND");
	
	// Create a root TrieNode
	// True allows for 128 bool children
	// But all those children will be empty Dynamic Arrays
	// Prevents run away recursion and segmentation faults
	TrieNode* root = new TrieNode(true);
	
	// Add the strings 
	addString(root, FOUND, 0);
	addString(root, COUNT, 0);
	addString(root, FIT, 0);	
	addString(root, CAN, 0);
	addString(root, FASTER, 0);
	addString(root, CANDY, 0);
	addString(root, FAST, 0);
	addString(root, COULD, 0);
	addString(root, FOX, 0);
	addString(root, FAT, 0);
		
	printTriePreOrder(root, 1);
	
	COUT << ENDL; 
	
	file_out << "Student successfully answered Problem 2 correctly in class." << ENDL;

	// Close the file 
	file_out.close();	
	
	return 0;
}