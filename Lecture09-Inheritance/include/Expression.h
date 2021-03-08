// Expression.h Base Class Definition

#ifndef EXPRESSION
#define EXPRESSION

#include <iostream>
#include "BinNode.h"


class Expression {
	
	private:

		double resultVal;
		
		BinNode* root;

	public: 
	 
		Expression() : resultVal(), root() { }
	 
		virtual ~Expression() {}
		
		Expression( const Expression& copy ) : resultVal (copy.resultVal), root (copy.root) { }

		Expression& operator=( const Expression& rhs ){	

			if( this != &rhs ){
				
				this->resultVal = rhs.resultVal;
				this->root = rhs.root;				
				
			}
			
			return *this;

		}		
	  
		// Returns the result of evaluating this expression.
		virtual double eval() const{
			
			return resultVal;
		}

		// Prints the expression. DO NOT evaluate before printing.
		friend std::ostream& operator<<( std::ostream& out, const Expression& theExpr ){
			
			out << theExpr.resultVal << std::endl;
			
			return out;
		}
	
};

#endif
