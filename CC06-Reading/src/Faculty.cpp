#include "../include/Faculty.h"

Faculty::Faculty(const std::string& lastIn, const std::string& firstIn, const unsigned int& ndIDIn, const TRACK& trackIn) 
	: 	Irish(lastIn, firstIn, ndIDIn), 
		facTrack(trackIn), 
		dept("") {
			
		std::cout << "Base Address of Faculty object: " << this << std::endl;
}
		

Faculty::~Faculty(){
	
	std::cout << "Destroying Derived Class Faculty " << this << std::endl;
}


std::string Faculty::getTRACK() const{
	
	switch(facTrack){
		
		case TENURE:
			return "Tenure Track";
			break;
			
		case TEACHING:
			return "Teaching Track";
			break;
			
		default:
			return "No valid track value";
	}
}

		
		
void Faculty::setDept(const std::string& deptIn){
	
	dept = deptIn;
	
}

void Faculty::printInformation() const{
	
	// Print members derived from base class 
	std::cout << "Faculty: " << this->lastName << ", " << this->firstName;
	std::cout	<< " (" << this->ndID << ")" << (char)10;
	std::cout << "Home Address: " << this->homeAddress << "\n";
	
	// No need for this-> since getTRACK and dept are not derived from Irish
	std::cout << "Track: " << getTRACK() << std::endl;
	std::cout << "Department: " << dept << std::endl;
	
}


std::ostream& operator<<(std::ostream& output, const Faculty& theFaculty){
	
	output << "Faculty: " << theFaculty.lastName << ", " << theFaculty.firstName;
	output	<< " (" << theFaculty.ndID << ")" << (char)10;
	output << "Home Address: " << theFaculty.homeAddress << "\n";
	output << "Track: " << theFaculty.getTRACK() << std::endl;
	output << "Department: " << theFaculty.dept;
	
	return output;
}