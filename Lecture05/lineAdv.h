/**********************************************
* File: lineAdv.h
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
**********************************************/

#ifndef LINEADV_H
#define LINEADV_H

#include "pointAdv.h"

class line{
	
	private:
		point origin;
		point destin;
		
	public:
	
		line();
		
		line(point originIn, point destinIn);
		
		line(COORDINATE orgX, COORDINATE orgY, COORDINATE desX, COORDINATE desY);
		
		point getOrigin() const;
		
		point getDestin() const;

		float getSlope() const;
		
		void printLine() const;
		
		friend std::ostream& operator<<( std::ostream& out, const line& printLine );
	
};

#endif