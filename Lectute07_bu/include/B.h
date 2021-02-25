#ifndef B_H
#define B_H

#include "A.h"

template< class T, class U, class V >
class B{
    
    private:
    
        A<T, U> the_A;
        V the_V;
        
    public:
    
        B() : the_A(), the_V() {}
        
		
        B( const A<T, U>& A_In, const V& V_In ) : the_A( A_In ), the_V( V_In ) {}
        
		
        B( const T& T_In, const U& U_In, const V& V_In ) 
            : the_A( T_In, U_In ), the_V( V_In ) {}
        
		
        friend std::ostream& operator<<( std::ostream& out, const B<T,U,V>& print_B ){
            
            out << print_B.the_V << " ";
            out << print_B.the_A.get_the_T() << " " << print_B.the_A.get_the_U(); 
            
            return out;
        }
    
    
};



#endif