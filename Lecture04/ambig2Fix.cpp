#include <iostream>

void func( int variable ){
    
    std::cout << "In func 1: " << variable << std::endl;
    
}

double func( double variable, double variable2 ){
 
    return variable * variable2;
    
}


int main(void){
    
    func( 10 );
    
    std::cout << "Hello: " << func( 2, 10 ) << std::endl;

    return 0;

}
