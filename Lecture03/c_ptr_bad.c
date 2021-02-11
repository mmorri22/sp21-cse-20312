#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    char* phrase = (char *)malloc( 5 * sizeof(char) );
    
    phrase[0] = 'H';    phrase[1] = 'e';    phrase[2] = 'l';
    phrase[3] = 'l';    phrase[4] = 'o'; 
    
    fprintf( stdout, "Old - %p %s\n", (void *)phrase, phrase );
    
    phrase = "Notre";
    
    fprintf( stdout, "New - %p %s\n", (void *)phrase, phrase );
    
    free( phrase );

    return 0;
}