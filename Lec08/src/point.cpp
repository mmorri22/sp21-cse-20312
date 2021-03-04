/**********************************************
* File: point.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
* This file contains the method definitions for 
* class point, used in the introduction to C++ 
* classes lecture. 
**********************************************/

#include "../inc/point.h"

point::point() : x(0), y(0) {}


point::point(COORDINATE inX, COORDINATE inY) : x(inX), y(inY) {}


COORDINATE point::getX() const{
	return x; 
}

COORDINATE point::getY() const{
	return y;
}

void point::setX(COORDINATE inX){
	x = inX;
}

void point::setY(COORDINATE inY){
	y = inY;
}

std::ostream& operator<<( std::ostream& output, const point& print_point ){
	
	output << "{" << print_point.x << ", " << print_point.y << "}";
	
	return output;
}


