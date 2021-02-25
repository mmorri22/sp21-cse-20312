#include "../inc/student.h"

int main(){
	
	addr addr_0( 123, "Main St.", "South Bend", "IN", 46530 ); 
	
	const addr addr_1( 404, "Street Not Found", "Nowhere", "IN", 46556 ); 
	
	Student stu_1( "Brian", "Kelly", addr_0 );
	
	const Student stu_2( "Matthew", "Morrison", addr_1 ); 
	
	Student stu_3( "Matthew", "Morrison", addr_1 ); 
	
	COUT << stu_1 << ENDL;
	
	COUT << stu_2 << ENDL;
	
	if( stu_1 > stu_2 ){
		
		COUT << "stu_1 > stu_2" << ENDL;
	}
	
	if( stu_1 >= stu_2 ){
		
		COUT << "stu_1 >= stu_2" << ENDL;
	}

	if( stu_1 < stu_2 ){
		
		COUT << "stu_1 < stu_2" << ENDL;
	}
	
	if( stu_1 <= stu_2 ){
		
		COUT << "stu_1 <= stu_2" << ENDL;
	}
	
	if( stu_2 == stu_3 ){
		
		COUT << "stu_2 == stu_3" << ENDL;
	}
	
	return 0;
	
}