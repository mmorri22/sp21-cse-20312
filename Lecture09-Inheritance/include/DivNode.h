#ifndef DIVNODE_H
#define DIVNODE_H

#include "BinNode.h"

class DivNode: public BinNode
{
	
	public:
		DivNode (Node* pLeft, Node* pRight);
		
		~DivNode();
		
		double Calc () const;

};

#endif
