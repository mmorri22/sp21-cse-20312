/**********************************************
* File: lineAdv.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
**********************************************/

#include "lineAdv.h"


line::line() : origin( point(0, 0) ), destin( point(0, 0) ) {}

line::line(point originIn, point destinIn) : origin( originIn ), destin( destinIn ) {
	
}

line::line(COORDINATE orgX, COORDINATE orgY, COORDINATE desX, COORDINATE desY) : 
	origin( point(orgX, orgY) ), destin( point(desX, desY) ) {
		
	}

point line::getOrigin() const{
	return origin;
}

point line::getDestin() const{
	return destin;
}

float line::getSlope() const{
	
	return (destin.getY() - origin.getY()) / (destin.getX() - origin.getX());
}

std::ostream& operator<<( std::ostream& out, const line& printLine ){
	
	out << "{" << printLine.origin << ", " << printLine.destin <<  "}";
	
	return out;
}