#ifndef BINNODE_H
#define BINNODE_H

#include "Node.h"

class BinNode : public Node
{
	
	protected:
		Node* leftNode;
		Node* rightNode;
	
	public:
	
		BinNode ( );
	
		BinNode (Node* pLeft, Node* pRight);

		virtual ~BinNode ();
		
		BinNode( const BinNode& copy );
		
		BinNode& operator=( const BinNode& rhs );
		
};



#endif