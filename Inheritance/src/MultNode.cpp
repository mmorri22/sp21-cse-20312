#include "../include/MultNode.h"

MultNode::MultNode (Node* pLeft, Node* pRight) : BinNode (pLeft, pRight) {}

MultNode::~MultNode() {}

double MultNode::Calc () const{
	double left = leftNode->Calc ();
	double right = rightNode->Calc ();
	std::cout << "Multiplying " << left << " * " << right << "\n";
	return left * right;
}