/**********************************************
* File: classIntro.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains examples of class constructor calls 
**********************************************/

#include "../inc/line.h"

int main(){

	point point1;
	point point2( (COORDINATE)-1.1, (COORDINATE)5.3 );

	/* Default constructor for line */
	line line1;
	std::cout << "line1 is ";
	line1.printLine();
	std::cout << std::endl;	
	
	/* Constructor with points for line */
	line line2(point1, point2);
	std::cout << "line2 is ";
	line2.printLine();
	std::cout << std::endl;	
	
	/* Constructor with COORDINATE for line */
	line line3(point2.getX(), point2.getY(), point1.getX(), point1.getY());
	std::cout << "line3 is ";
	line3.printLine();
	std::cout << std::endl;	
	
	/* Print all slopes */
	std::cout << "line1 slope is " << line1.getSlope() << std::endl;
	std::cout << "line2 slope is " << line2.getSlope() << std::endl;
	std::cout << "line3 slope is " << line3.getSlope() << std::endl;
	
	return 0;
}
