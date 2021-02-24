#include "../inc/addr.h"

addr::addr() : street_num(), street_name(), street_city(), street_state(), zip_code() {}


/* Step 4 - Write the overloaded constructor definition member initialization list for taking in the address */
addr::addr( const unsigned int& num_in, const STRING& name_in, const STRING& city_in, const STRING& state_in, const unsigned int& zip_in ) : 

/* Step 5 - Write a friend operator definition to print the address to the output */