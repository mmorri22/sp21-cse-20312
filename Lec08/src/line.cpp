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

point line::getOrigin() const{
	return origin;
}

point line::getDestin() const{
	return destin;
}


void line::setOrigin( const point& origin_in ) {
	origin = origin_in;
}

void line::setDestin( const point& destin_in ) {
	destin = destin_in;
}


SLOPE line::getSlope() const{
	
	return (destin.getY() - origin.getY()) / (destin.getX() - origin.getX());
}

std::ostream& operator<<( std::ostream& output, const line& print_line ){
	
	output << print_line.origin << ", " << print_line.destin;
	
	return output;
	
}

std::istream& operator>>( std::istream& input, line& read_line ){
	
	
	/* In-Class Work Part 3 begins here */

	
	return input;
	
}
