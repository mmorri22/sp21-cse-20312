#ifndef STUDENT_H
#define STUDENT_H

#include "addr.h"

class Student{
	
	private:
	
		STRING stu_first;
		STRING stu_second;
		addr stu_addr;
	
	public:
	
		/* Default constructor */
		Student() : stu_first(), stu_second(), stu_addr() {}
		
		/* Overloaded constructor */
		Student( const STRING& first_in, const STRING& second_in, const addr& addr_in )
			: stu_first( first_in ),
			stu_second( second_in ),
			stu_addr( addr_in ) {}
		
		/* Overloaded Operators */
		bool operator>=( const Student& rhs ) const;
		bool operator>( const Student& rhs ) const;
		bool operator<( const Student& rhs ) const;
		bool operator<=( const Student& rhs ) const;
		bool operator==( const Student& rhs ) const;
		
		friend std::ostream& operator<<( std::ostream& out, const Student& print_stu );
	
};

#endif
