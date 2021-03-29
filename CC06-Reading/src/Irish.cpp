/**********************************************
* File: Irish.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* The function definitions for the Base Irish Class 
**********************************************/
#include "../include/Irish.h"


/********************************************
* Function Name  : Irish::Irish
* Pre-conditions : const std::string& lastIn, const std::string& firstIn, const unsigned int ndIDIn
* Post-conditions: none
*  
********************************************/ 
Irish::Irish(const std::string& lastIn, const std::string& firstIn, const unsigned int& ndIDIn)
	: lastName(lastIn), firstName(firstIn), ndID(ndIDIn), homeAddress("") { 
	
		std::cout << "Base Address of Irish object: " << this << std::endl;
	
	}



/********************************************
* Function Name  : Irish::~Irish
* Pre-conditions : none
* Post-conditions: virtual
*  
********************************************/
Irish::~Irish(){
	
	std::cout << "Destroying Base Class Irish " << this << std::endl;
	
}



/********************************************
* Function Name  : Irish::setHomeAddress
* Pre-conditions : std::string homeAddrIn
* Post-conditions: none
*  
********************************************/
void Irish::setHomeAddress(const std::string& homeAddrIn){
	homeAddress = homeAddrIn;
}
	


/********************************************
* Function Name  : operator<<
* Pre-conditions : std::ostream& output, const Irish& person
* Post-conditions: std::ostream&
*  
********************************************/
std::ostream& operator<<(std::ostream& output, const Irish& person){
	
	output << person.lastName << ", " << person.firstName;
	output	<< " (" << person.ndID << ")" << (char)10;
	output << "Home Address: " << person.homeAddress;
	
	return output;
}


void Irish::printInformation(){
	
	std::cout << lastName << ", " << firstName;
	std::cout	<< " (" << ndID << ")" << (char)10;
	std::cout << "Home Address: " << homeAddress << std::endl;
	
}
