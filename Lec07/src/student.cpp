#include "student.h"

/* Default constructor */
Student::Student() : stu_first(), stu_second(), stu_addr() {}

/* Overloaded Constructor */
Student::Student( const STRING& first_in, const STRING& second_in, const addr& addr_in )
	: stu_first( first_in ),
	stu_second( second_in ),
	stu_addr( addr_in ) {}

/* Step 6 - Example of Overloaded Operators for Student */



/* Other operators */
bool Student::operator>( const Student& rhs ) const{
	
	if( stu_last > rhs.stu_last )
		return true;
	
	else if( stu_last < rhs.stu_last )
		return false;
	
	else{
		
		if( stu_first > rhs.stu_first )
			return true;
		
		return false;
	}
}

bool Student::operator<( const Student& rhs ) const{
	
	if( stu_last < rhs.stu_last )
		return true;
	
	else if( stu_last > stu_first )
		return false;
	
	else{
		
		if( stu_first < rhs.stu_first )
			return true;
		
		return false;
	}
}

bool Student::operator<=( const Student& rhs ) const{
	
	if( stu_last > rhs.stu_last )
		return false;
	
	else if( stu_last < rhs.stu_last )
		return true;
	
	/* Last Names are equal */
	else{
		
		if( stu_first <= rhs.stu_first )
			return true;
			
		return false;
	}
	
}
bool Student::operator==( const Student& rhs ) const{
	
	return ( stu_last == rhs.stu_last ) && ( stu_first == rhs.stu_first );
	
}


	
/* Friend Operator */
std::ostream& operator<<( std::ostream& out, const Student& print_stu ){
	
	/* Step 7 - Calling friend operator with private aggregated member address */
	
	return out;
}
