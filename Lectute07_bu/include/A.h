#ifndef A_H
#define A_H

#include <iostream>
#include <cstdlib>

#define COUT std::cout 
#define ENDL std::endl

template< class T, class U >
class A{
    
    private:
    
        T the_T;
        U the_U;
    
    public:
    
        A() : the_T(), the_U() {}
        
        A( const T& T_In, const U& U_In ) : the_T( T_In ), the_U( U_In ) {}
        
        T get_the_T() const {
            
            return the_T;
            
        }
        
        U get_the_U() const {
            
            return the_U;
            
        }
    
};



#endif