#include "../inc/SLLNode.h"
#include "../inc/findCircular.h"

int main(){
	
	// Create the SLLNodes
	SLLNode<int> SLLNode1(10);
	SLLNode<int> SLLNode2(20);
	SLLNode<int> SLLNode3(30);
	SLLNode<int> SLLNode4(40);
	SLLNode<int> SLLNode4b(45);
	SLLNode<int> SLLNode5(32);
	
	// Make the circular list
	SLLNode1.next = &SLLNode2;
	SLLNode2.next = &SLLNode3;
	SLLNode3.next = &SLLNode4;
	SLLNode4.next = &SLLNode5;
	SLLNode5.next = &SLLNode1;	// Circular occurs here
	
	// Go through the SLLNodes
	SLLNode<int> *SLLNodeSlow = new SLLNode<int>();
	SLLNode<int> *SLLNodeFast = new SLLNode<int>();
	
	findCircularRace(SLLNode1, SLLNodeSlow, SLLNodeFast);
	
	// Make the circular list odd length
	SLLNode4.next = &SLLNode4b;
	SLLNode4b.next = &SLLNode5;
	std::cout << "---------------------------------------\n";
	findCircularRace(SLLNode1, SLLNodeSlow, SLLNodeFast);
	
	// Move the loop to the SLLNode3
	SLLNode5.next = &SLLNode3;
	std::cout << "---------------------------------------\n";
	findCircularRace(SLLNode1, SLLNodeSlow, SLLNodeFast);
	
	// Remove loop 
	SLLNode5.next = new SLLNode<int>();
	std::cout << "---------------------------------------\n";
	findCircularRace(SLLNode1, SLLNodeSlow, SLLNodeFast);
	
	return 0;
	
}
