#include "../include/BinNode.h"

BinNode::BinNode ( ) : Node(), leftNode( NULL ), rightNode( NULL ) {}

BinNode::BinNode (Node* pLeft, Node* pRight) : Node(), leftNode (pLeft), rightNode (pRight) {}

BinNode::~BinNode (){

	delete leftNode;
	delete rightNode;
}

BinNode::BinNode( const BinNode& copy ) : Node(), leftNode (copy.leftNode), rightNode (copy.rightNode) { }

BinNode& BinNode::operator=( const BinNode& rhs ){
	
	if( this != &rhs ){
		
		this->leftNode = rhs.leftNode;
		this->rightNode = rhs.rightNode;				
		
	}
	
	return *this;
	
}