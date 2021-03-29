#ifndef FACULTY_H
#define FACULTY_H

#include "Irish.h"

enum TRACK{ TENURE, TEACHING };

class Faculty : public Irish{
	
	private:
		TRACK facTrack;
		std::string dept;
		
		std::string getTRACK() const;
	
	public:
	
		Faculty(const std::string& lastIn, const std::string& firstIn, const unsigned int& ndIDIn, const TRACK& trackIn);
		
		~Faculty();
		
		void setDept(const std::string& deptIn);
		
		void printInformation() const;
		
		friend std::ostream& operator<<(std::ostream& output, const Faculty& theFaculty);
	
};

#endif
