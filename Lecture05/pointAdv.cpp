/**********************************************
* File: pointAdv.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
* This file contains the method definitions for 
* class point, used in the introduction to C++ 
* classes lecture. 
**********************************************/

#include "pointAdv.h"


point::point() : x(0), y(0) {}


point::point(COORDINATE inX, COORDINATE inY) : x(inX), y(inY) {}


COORDINATE point::getX() const {
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

void point::printPoint() const{
	std::cout << "{" << x << ", " << y << "}";
}

std::ostream& operator<<( std::ostream& out, const point& printPoint ){
	
	out << "(" << printPoint.x << ", " << printPoint.y << ")";
	
	return out;
}