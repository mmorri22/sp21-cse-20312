#ifndef STUDENT_H
#define STUDENT_H

#include "addr.h"

class Student{
	
	private:
	
		STRING stu_first;
		STRING stu_last;
		addr stu_addr;
	
	public:
	
		/* Default constructor */
		Student();
		
		/* Overloaded constructor */
		Student( const STRING& first_in, const STRING& last_in, const addr& addr_in );
		
		/* Overloaded Operators */
		bool operator>( const Student& rhs ) const;
		bool operator>=( const Student& rhs ) const;
		bool operator<( const Student& rhs ) const;
		bool operator<=( const Student& rhs ) const;
		bool operator==( const Student& rhs ) const;
		bool operator!=( const Student& rhs ) const;
		
		friend std::ostream& operator<<( std::ostream& out, const Student& print_stu );
	
};

#endif
