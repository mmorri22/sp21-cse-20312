/**********************************************
* File: line.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
**********************************************/

#include "../inc/line.h"

line::line() : origin( point(0, 0) ), destin( point(0, 0) ) {}

line::line(point originIn, point destinIn) : origin( originIn ), destin( destinIn ) { 

}

line::line(COORDINATE orgX, COORDINATE orgY, COORDINATE desX, COORDINATE desY) : 
	origin( point(orgX, orgY) ), destin( point(desX, desY) ) {
		
	}

point line::getOrigin(){
	return origin;
}

point line::getDestin(){
	return destin;
}

float line::getSlope(){
	
	return (destin.getY() - origin.getY()) / (destin.getX() - origin.getX());
}

void line::printLine(){
	
	origin.printPoint();
	std::cout << ", ";
	destin.printPoint();
	
}
