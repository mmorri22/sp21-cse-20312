#include <unordered_map>
#include <string>
#include <iostream>
#include <fstream>

#define COUT std::cout
#define ENDL std::endl
#define OFSTREAM std::ofstream

int getLongestNonRepeat( const std::string& testString ){
	
	int current = 0;	int maximum = 0;
	std::unordered_map< char, int > charHash;
	
	// Problem 3 Code Starts Here
	
}


int main(){
	
	OFSTREAM out("Prob3.txt");
	
	out << getLongestNonRepeat( "cnipicdei" ) << ENDL;
	out << getLongestNonRepeat( "cnwibfpsilmioeo" ) << ENDL;
	out << getLongestNonRepeat( "abcabcbb"  ) << ENDL;
	out << getLongestNonRepeat( "bbbbb" ) << ENDL;
	out << getLongestNonRepeat( "pwwkew" ) << ENDL;
	out << getLongestNonRepeat( "bacadaelmnofghijaka" ) << ENDL;
	out << getLongestNonRepeat( "hgklcyvlstwhjhighssw" ) << ENDL;
	out << getLongestNonRepeat( "umwoleylehugrayqoz" ) << ENDL;
	
	out.close();
	
	return 0;
}
