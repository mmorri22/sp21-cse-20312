#include "../include/SubNode.h"

SubNode::SubNode (Node* pLeft, Node* pRight) : BinNode (pLeft, pRight) {}

SubNode::~SubNode() {}

double SubNode::Calc () const{
	double left = leftNode->Calc ();
	double right = rightNode->Calc ();
	std::cout << "Subtracting " << left << " - " << right << "\n";
	return left - right;
}