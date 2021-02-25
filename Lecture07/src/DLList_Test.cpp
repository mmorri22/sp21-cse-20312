#include "../inc/student.h"
#include "../inc/DLList.h"

int main(){
	
	addr addr_0( 123, "Main St.", "South Bend", "IN", 46530 ); 
	
	const addr addr_1( 404, "Street Not Found", "Nowhere", "IN", 46556 ); 
	
	addr addr_2( 408, "Street Not Found", "Nowhere", "IN", 46556 ); 
	
	Student stu_1( "Brian", "Kelly", addr_0 );
	
	const Student stu_2( "Matthew", "Morrison", addr_1 ); 
	
	Student stu_3( "Peter", "Bui", addr_2 ); 
	
	DLList< Student > the_List;
	
	the_List.Insert( stu_1 );
	
	the_List.Insert( stu_2 );
	
	the_List.Insert( stu_3 );
	
	COUT << the_List << ENDL;
	
	/* Test contains */
	if( the_List.contains( stu_1 ) ){
		
		COUT << stu_1 << " is in the list" << ENDL;
	}
	else{
		
		COUT << stu_1 << " is not in the list" << ENDL;
	}
	
	COUT << ENDL;
	
	/*  Step 13 - Uncomment Here */
	
	// Test assignment operator
	DLList< Student > the_List2 = the_List;
	
	the_List2.Delete( stu_2 );
	
	COUT << the_List2 << ENDL; 
	
	/* Step 13 - and uncomment here */
	
	return 0;
	
}
