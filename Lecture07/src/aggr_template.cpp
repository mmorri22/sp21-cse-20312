#include "../include/B.h"

int main()
{
    
    A< int, double > a_1( 141, 3.14 );
    
    B< int, double, float > b_1( a_1, (float)1.23 );
    
    B< int, double, float > b_2( 1, 2.2, (float)3.3 );
    
    COUT << b_2 << ENDL;
    
    COUT << b_1 << ENDL;

    return 0;
}