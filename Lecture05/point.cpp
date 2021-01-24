/**********************************************
* File: point.cpp
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
* This file contains the method definitions for 
* class point, used in the introduction to C++ 
* classes lecture. 
**********************************************/

#include "point.h"


point::point() : x(0), y(0) {}


point::point(COORDINATE inX, COORDINATE inY) : x(inX), y(inY) {}


COORDINATE point::getX(){
	return x;
}


COORDINATE point::getY(){
	return y;
}


void point::setX(COORDINATE inX){
	x = inX;
}

void point::setY(COORDINATE inY){
	y = inY;
}

void point::printPoint(){
	std::cout << "{" << x << ", " << y << "}";
}


