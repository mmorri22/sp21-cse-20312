#include <iostream>

#define COUT std::cout
#define ENDL std::endl
  
class Base 
{ 
    protected:
        int x = 0; 
        
    public: 
	
		Base() {
			COUT << "Base Created" << ENDL;
		}
		
		virtual ~Base(){
			COUT << "Base Destroyed" << ENDL;
		}
	
        virtual int getX() const = 0;
		virtual void setX( int x_in ) = 0;
}; 
  
class Derived : public Base 
{ 
    int y; 

    public: 
	
		Derived( int y_in ) : y( y_in ) {
			COUT << "Derived Created" << ENDL;
		}
		
		~Derived(){
			COUT << "Derived Destroyed" << ENDL;
		}
		
        void setX( int x_in ) {
            this->x = x_in;
        }
        
        int getX() const{
            return this->x;
        }
        
        friend std::ostream& operator<<( std::ostream& output, const Derived& printDer ){
            
            output << printDer.getX() << " " << printDer.y;
            
            return output;
        }
    
};


class Polymorph : public Base 
{ 
    int y; 

    public: 
	
		Polymorph( int y_in ) : y( y_in + 10 ) {
			COUT << "Polymorph Created" << ENDL;
		}
		
		~Polymorph(){
			COUT << "Polymorph Destroyed" << ENDL;
		}
        
        int getX() const{
            return this->x;
        }
 
        void setX( int x_in ) {
            this->x = x_in + 10;
        }
 
        friend std::ostream& operator<<( std::ostream& output, Polymorph& printPoly ){
            
            output << printPoly.getX() << " " << printPoly.y;
            
            return output;
        }
    
}; 
  

int main()
{
    Base* b1;
	Base* b2;
    Derived d(5);
	Polymorph p(10);
	
    b1 = &d;
	b2 = &p;
	
	b1->setX(15);
	b2->setX(20);
	
    COUT << d << ENDL;
    COUT << p << ENDL;
    
    return 0;
}