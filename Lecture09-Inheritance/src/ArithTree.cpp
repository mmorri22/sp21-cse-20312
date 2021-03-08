#include "../include/Node.h"
#include "../include/NumNode.h"
#include "../include/BinNode.h"
#include "../include/AddNode.h"
#include "../include/MultNode.h"
#include "../include/SubNode.h"
#include "../include/DivNode.h"

int main(){
	
  std::cout << "First Equation: ( 20.0 + (-10.0) ) * 0.1 " << std::endl;
  Node* pNode1 = new NumNode (20.0);
  Node* pNode2 = new NumNode (-10.0);
  Node* pNode3 = new AddNode (pNode1, pNode2);
  Node* pNode4 = new NumNode (0.1);
  Node* pNode5 = new MultNode (pNode3, pNode4);
  std::cout << "Calculating the tree\n";
  // tell the root to calculate itself
  double x = pNode5->Calc ();
  std::cout << "Result: " << x << std::endl;
  delete pNode5; // and all children
  
  
  std::cout << "\nSecond Equation: 5 - ( 1 / ( 3 * ( -20 + 6 ) ) )" << std::endl;
  Node* pNode6 = new NumNode (-20);
  Node* pNode7 = new NumNode (6);
  Node* pNode8 = new AddNode (pNode6, pNode7);
  Node* pNode9 = new NumNode (3);
  Node* pNode10 = new MultNode (pNode9, pNode8);
  Node* pNode11 = new NumNode (1);
  Node* pNode12 = new DivNode (pNode11, pNode10);
  Node* pNode13 = new NumNode (5);
  Node* pNode14 = new SubNode (pNode13, pNode12); 
  std::cout << "Calculating the tree\n";
  double y = pNode14->Calc ();
  std::cout << "Result: " << y << std::endl;
  
  delete pNode14;

  return 0;
}

