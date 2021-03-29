#include "../include/NumNode.h"

NumNode::NumNode (double numValIn) : numVal ( numValIn ) {}

NumNode::~NumNode() { }

double NumNode::Calc () const
{
  return numVal;
}