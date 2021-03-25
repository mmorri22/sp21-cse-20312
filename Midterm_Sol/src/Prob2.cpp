#include <iostream>
#include <fstream>
#include <unordered_map>

int coin_comb( std::unordered_map< int, int >& coin_map, int cents ){
	
	if( cents < 0 )
		return 0;
	
	else if( cents < 5 ){
		
		coin_map.insert( { cents, 1 } );
		return 1;
		
	}
	
	int result = coin_comb( coin_map, cents - 1 ) + coin_comb( coin_map, cents - 5 ) +
		coin_comb( coin_map, cents - 10 ) + coin_comb( coin_map, cents - 25 );
		
	coin_map.insert( {cents, result} );
	
	return result;
	
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