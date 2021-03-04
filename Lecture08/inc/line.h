/**********************************************
* File: line.h
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
*  
**********************************************/

#ifndef LINE_H
#define LINE_H

#include "point.h"

#define SLOPE double

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
		
		void setOrigin( const point& origin_in );

		void setDestin( const point& destin_in );

		SLOPE getSlope() const;
		
		friend std::ostream& operator<<( std::ostream& output, const line& print_line );
		
		friend std::istream& operator>>( std::istream& output, line& print_line );
		
};


#endif
