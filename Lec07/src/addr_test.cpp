#include "../addr.h"

int main(){
	
	
	addr addr_0( 123, "Main St.", "South Bend", "IN", 46530 ); 
	
	addr addr_1( 404, "Street Not Found", "Nowhere", "IN", 46556 ); 
	
	COUT << addr_0 << ENDL;
	
	COUT << addr_1 << ENDL;
	
	return 0;
	
}