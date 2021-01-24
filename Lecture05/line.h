/**********************************************
* File: line.h
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
**********************************************/

#ifndef LINE_H
#define LINE_H

#include "point.h"

class line{
	
	private:
		point origin;
		point destin;
		
	public:
	
		line();
		
		line(point originIn, point destinIn);
		
		line(COORDINATE orgX, COORDINATE orgY, COORDINATE desX, COORDINATE desY);
		
		point getOrigin();
		
		point getDestin();

		float getSlope();
		
		void printLine();
	
};


#endif
