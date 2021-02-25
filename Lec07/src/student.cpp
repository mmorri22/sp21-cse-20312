#include "student.h"

/* Default constructor */
Student::Student() : stu_first(), stu_second(), stu_addr() {}

/* Overloaded Constructor */
Student::Student( const STRING& first_in, const STRING& second_in, const addr& addr_in )
	: stu_first( first_in ),
	stu_second( second_in ),
	stu_addr( addr_in ) {}
	
	
/* Friend Operator */
std::ostream& operator<<( std::ostream& out, const Student& print_stu ){
	
	/* Step 6 */
	
	return out;
}