#include <iostream>
#include <fstream>
#include <unordered_map>

int coin_comb( std::unordered_map< int, int >& coin_map, int cents ){
	
	/* Problem 2 Starts Here */
	
}

int main(){
	
	std::unordered_map< int, int > coin_map;
	int num_coins = 47;
	
	std::ofstream out( "Prob2.txt" );
	
	coin_comb( coin_map, num_coins );
	
	for( int iter = 0; iter <= num_coins; ++iter ){
		
		out << iter << " coins: " << coin_map[ iter ] << " combinations\n";
		
	}
	
	out.close();
	
	return 0;
}