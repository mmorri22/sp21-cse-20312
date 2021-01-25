#ifndef NUMNODE_H
#define NUMNODE_H

#include "Node.h"

class NumNode : public Node{
	
	private:
		double numVal;
	
	
	public:
	
		NumNode (double numValIn);
		
		~NumNode();

		double Calc () const;
	
};


#endif