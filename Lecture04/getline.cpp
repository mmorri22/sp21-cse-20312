#include <iostream>
#include <string>

#define COUT std::cout
#define ENDL std::endl
#define CIN std::cin
#define GETLINE std::getline
#define STRING std::string

int main(void){
    
    STRING x;
	char buf[100];
	
	/* Part 1 - Get a string using std::cin.getline() */
	COUT << "Enter a string, ending with a Enter : ";
	CIN.getline(buf , 80); 	// reads everything through a \n'
							// stopping after 80 chars if no \n'
	
	COUT << "You entered: " << buf << ENDL;
	
	COUT << "Enter a string, ending with a ? : ";
	CIN.getline(buf , 80, '?');     // reads everything through a ?
                                    // stopping after 80 chars if no ?
                                    
    COUT << "You entered: " << buf << ENDL;
	
	/* Part 2 - getline with std::string */
    COUT << "Enter a string, ending with a ; : ";
    GETLINE(CIN, x, ';');
    
    COUT << "You entered: " << x << ENDL;

    return 0;

}