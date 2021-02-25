#include "../inc/student.h"
#include "../inc/Node.h"

int main(){
	
	addr addr_0( 123, "Main St.", "South Bend", "IN", 46530 ); 
	
	const addr addr_1( 404, "Street Not Found", "Nowhere", "IN", 46556 ); 
	
	Student stu_1( "Brian", "Kelly", addr_0 );
	
	const Student stu_2( "Matthew", "Morrison", addr_1 ); 
	
	Student stu_3( "Matthew", "Morrison", addr_1 ); 
	
	/* Create the nodes */
	node< Student > node1( stu_1 );
	
	node< Student > node2( stu_2 );
	
	node< Student > node3( stu_3 );
	
	/* Example showing connecting */
	/* node1.prev = NULL;
	
	node1.next = &node2;
	
	node2.prev = &node1;
	
	node2.next = &node3;
	
	node3.prev = &node2; */
	
	return 0;
	
}