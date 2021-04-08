#ifndef BST1_H
#define BST1_H

#include "BSTNode.h"
#include <iostream>

#define COUT std::cout
#define ENDL std::endl

template< class T >
class BST{
	
	private:
		
		void Insert( BSTNode<T>*& currPtr, BSTNode<T>* insertPtr ){
			
			if( currPtr == NULL ){
				
				// Set the pointer to the location at insertPtr
				currPtr = insertPtr;
				return;
			}
			
			if( currPtr->data > insertPtr->data ){
				
				Insert( currPtr->left, insertPtr );
			}
			else if( currPtr->data < insertPtr->data ){
				
				Insert( currPtr->right, insertPtr );
			}
			else{
				// Data is the same. Assume no duplicates
			}
			
		}
		
		// Copy Tree - Uses Pre-Order Traversal
		void copyTree(BSTNode< T >* originNode, BSTNode< T >*& destinNode){
			
			// Make the middle node
			destinNode = new BSTNode< T >( originNode->data );
			
			// Recursively go left 
			if( originNode->left != NULL ){
				copyTree(originNode->left, destinNode->left);
			}
			
			// Recursively go right
			if( originNode->right != NULL ){
				copyTree(originNode->right, destinNode->right);
			}
		}
		
		// Printing In Order 
		void printInOrder( std::ostream& output, const BSTNode< T >* currNode ) const{
			
			// Return if currNode is null 
			if( currNode == NULL ){
				return;
			}
			
			// Recursively call the left child 
			printInOrder( output, currNode->left );
			
			output << currNode->data << " ";
			
			// Recursively call the right child 
			printInOrder( output, currNode->right );
			
		}
		
		// Private method - Printing Pre Order 
		void printPreOrder( std::ostream& output, const BSTNode< T >* currNode ) const{
			
			// Return if currNode is null 
			if( currNode == NULL ){
				return;
			}
			
			// Print the middle node first
			output << currNode->data << " ";
			
			// Recursively call the left child 
			printPreOrder( output, currNode->left );
			
			// Recursively call the right child 
			printPreOrder( output, currNode->right );
			
		}
		
		// Private method - Printing Post Order 
		void printPostOrder( std::ostream& output, const BSTNode< T >* currNode ) const{
			
			// Return if currNode is null 
			if( currNode == NULL ){
				return;
			}
			
			// Recursively call the right child 
			printPostOrder( output, currNode->right );
			
			// Recursively call the left child 
			printPostOrder( output, currNode->left );
			
			// Print the middle node first
			output << currNode->data << " ";
			
		}
		
		// Root Node 
		BSTNode< T >* root;
		
	public: 
		
		BST() : root() {}
		
		~BST() { delete root; }
		
		// Copy constructor
		BST(const BST<T>& copy) : root(NULL) {
			// If assign.root is NULL, assign is an empty tree
			if( copy.root == NULL ){
				return;
			}
			
			// Set the root to the new data
			root = new BSTNode< T >( copy.root->data );
			
			// Set the root to the new data
			copyTree(copy.root, root);
		}
		
		// Assignment operator
		BST<T>& operator=(const BST<T>& assign){
			
			if( this != &assign ){
				// If assign.root is NULL, assign is an empty tree
				if( assign.root == NULL ){
					return *this;
				}
				
				// Set the root to the new data
				root = new BSTNode< T >( assign.root->data );
				
				// Set the root to the new data
				copyTree(assign.root, root);
			}
			
			return *this;	// Return de-referenced class ptr
		}
		
		void Insert( const T& value ){
			
			BSTNode<T>* newNode = new BSTNode<T>( value );
			
			Insert( root, newNode );
			
		}
		
		// Print the InOrder and Pre-Order Traversal 
		friend std::ostream& operator<<( std::ostream& output, const BST<T>& theTree ){
			
			// Pass the ostream and the root to print in order recursively
			output << "In-Order: ";
			theTree.printInOrder( output, theTree.root );
			output << "\nPre-Order: ";
			theTree.printPreOrder( output, theTree.root );
			output << "\nPost-Order: ";
			theTree.printPostOrder( output, theTree.root );
			
			return output;
			
		}
	
};

#endif