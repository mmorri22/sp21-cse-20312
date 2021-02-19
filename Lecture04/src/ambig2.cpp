#include <iostream>

void func( int variable ){
    
    std::cout << "In func 1: " << variable << std::endl;
    
}

double func( double variable ){
 
    return 2 * variable;
    
}


int main(void){
    
    func( 10 );
    
    std::cout << "Hello: " << func( 10 ) << std::endl;

    return 0;
}
