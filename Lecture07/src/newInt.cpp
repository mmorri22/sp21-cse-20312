/**********************************************
* File: newInt.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains pointer basic to help the student
* become more familiar with C++ pointers, as well as 
* the new keyword
**********************************************/

#include "iostream"

/********************************************
* Function Name  : main
* Pre-conditions : void
* Post-conditions: int
* 
* This is the main driver function for the program 
********************************************/
int main(void){
	
	/* Pointer declaration */
	int *firstPtr;
	
	/* Set the value pointed to by the location stored in firstPtr to 1 */
	firstPtr = new int(1);
	
	std::cout << "The info on firstPtr " << std::endl;
	std::cout << "firstPtr register address: " << (void *)&firstPtr << std::endl;
	std::cout << "firstPtr value is " << (void *)firstPtr << std::endl;
	std::cout << "value pointed to by firstPtr: " << *firstPtr << std::endl;
	
	/* Free the memory allocated to the firstPtr */
	delete firstPtr;

	return 0;
}

