#include "../include/AddNode.h"

AddNode::AddNode (Node* pLeft, Node* pRight) : BinNode (pLeft, pRight) {}

AddNode::~AddNode() {}

double AddNode::Calc () const{
	
	double left = leftNode->Calc ();
	double right = rightNode->Calc ();
	std::cout << "Adding " << left << " + " << right << "\n";
	
	return left + right;
}