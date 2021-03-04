/* Base class */

/* Step 1 - Guard Header Files */
#ifndef ADDR_H
#define ADDR_H

/* Step 2 - Must include iostream and string */
#include <iostream>
#include <string>

/* Step 3 - Do define for COUT, ENDL, and STRING */ 
#define COUT std::cout
#define ENDL std::endl
#define STRING std::string

class addr{
	
	private:
	
		unsigned int street_num;
		STRING street_name;
		STRING street_city;
		STRING street_state;
		unsigned int zip_code;
		
	public:
	
		addr();
		
		/* Step 4 - Write the overloaded constructor declaration for taking in the address */
		addr( const unsigned int& num_in, const STRING& name_in, const STRING& city_in, const STRING& state_in, const unsigned int& zip_in );
		
		
		/* Step 5 - Write a friend operator declaration to print the address to the output */
		friend std::ostream& operator<<( std::ostream& out, const addr& print_addr );
	
	
};


/* Step 1 - Guard Header Files */
#endif