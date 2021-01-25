#include "../include/DivNode.h"

DivNode::DivNode (Node* pLeft, Node* pRight) : BinNode (pLeft, pRight) {}

DivNode::~DivNode() {}

double DivNode::Calc () const{
	double left = leftNode->Calc ();
	double right = rightNode->Calc ();
	std::cout << "Dividing " << left << " / " << right << "\n";
	return left / right;
}