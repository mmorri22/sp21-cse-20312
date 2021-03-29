#ifndef STUDENT_H
#define STUDENT_H

#include "Irish.h"

enum CLASS {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class Student : public Irish{
	
	private:
		CLASS stuClass;
		std::string dorm;
		
		std::string getCLASS() const;
	
	public:
	
		Student(const std::string& lastIn, const std::string& firstIn, const unsigned int& ndIDIn, const CLASS& classIn);
		
		~Student();
		
		void setDorm(const std::string& dormIn);
		
		void printInformation() const;
		
		friend std::ostream& operator<<(std::ostream& output, const Student& theStudent);
	
};

#endif