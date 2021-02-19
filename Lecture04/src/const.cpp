/**********************************************
* File: const.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains examples of outputting  
* pointers in C++
**********************************************/

#include <iostream> /*C++ version of stdio.h*/

/* #define Directives */
#define COUT std::cout
#define ENDL std::endl

/* const global variable */
const double PI = 3.14159;

/* Function Declarations */
double CircleArea( double radius );
double CircleCircumference ( double radius );

/********************************************
* Function Name  : main
* Pre-conditions : none
* Post-conditions: int
* 
* This is the main driver function 
********************************************/
int main(){

	double radius = 5;
	
	COUT << "The circle's radius is " << radius << ENDL;
	COUT << "The value of Pi is " << PI << ENDL;
	
	COUT << "The area of the circle is " 
		<< CircleArea( radius ) << ENDL;
		
	COUT << "The circumfrence of the circle is " 
		<< CircleCircumference( radius ) << ENDL;

	return 0;
}

/* Function Definitions - Below main */

/********************************************
* Function Name  : CircleArea
* Pre-conditions : double radius 
* Post-conditions: double
* 
* Calculates the area of a circle 
********************************************/
double CircleArea( double radius ){
	
	return PI * radius * radius;
	
}

/********************************************
* Function Name  : CircleCircumference
* Pre-conditions : double radius 
* Post-conditions: double
* 
* Calculates the circumfrence of a circle 
********************************************/
double CircleCircumference ( double radius ){
	
	return PI * radius;
	
}
