#ifndef AVLTREE_H
#define AVLTREE_H

#include "AVLNode.h"
#include "queue.h"
#include <iostream>
#include <algorithm>

#define COUT std::cout
#define ENDL std::endl


template< class T >
class AVLTree {
	
	private:

		// Private Insert Method
		 void Insert( AVLNode< T >*& currPtr, const T& value ){
			
			// If the pointer is Null, we found our location 
			// Set the pointer to the new value
			if( currPtr == NULL ){
				currPtr = new AVLNode< T >(value);
			}
			
			// If value is less than current data, recurse left
			else if( value < currPtr->data ){
				Insert( currPtr->left, value );
			}
			
			// If value is greater than current data, recurse right
			else if( value > currPtr->data ){
				Insert( currPtr->right, value );
			}
			else{
				// Print that we found a duplicate
				std::cout << value << " is a duplicate " << std::endl;
			}	

			// Balance the tree on the way up
			balance( currPtr );		
			
		}
		
		bool remove( AVLNode<T>*& currPtr, const T& element ){
			
			// If we hit NULL, element is not in the tree
			if( currPtr == NULL ){
				
				std::cout << element << " is not in the tree" << std::endl;
				
				return false;
			}

			// Otherwise, check left if the element is less than the data
			if( element < currPtr->data ){
				return remove( currPtr->left, element );
			}
			
			// Otherwise, check right if the element is greater than the data			
			else if( element > currPtr->data ) {
				return remove( currPtr->right, element );
			}
			
			else{	// The node is not null and the data is equal 
			
				// If the parent has two children
				if( currPtr->left != NULL && currPtr->right != NULL ){
					
					// Set the currNode's data to the min's value 
					// Pass currPtr->left to get the maximum to the left
					currPtr->data = findMax( currPtr->left )->data;
					
					// Now we have a duplicate value
					// so recursively delete the duplicate
					return remove( currPtr->left, currPtr->data );
				}
				
				// If there are no children - Deleting a leaf 
				else if( currPtr->left == NULL && currPtr->right == NULL ){	
					
					AVLNode<T>* temp = currPtr;
					
					currPtr = NULL;
					
					free ( temp );
					
				}
				
				// If there is only one child 
				else {
					
					// Create a temp Node pointer, just like in Linked Lists 
					// Make it point to the currPtr
					AVLNode<T>* temp = currPtr; 
					
					// Set the currPtr to the non NULL child
					currPtr = ( currPtr->left != NULL ) ? currPtr->left : currPtr->right;
					
					// Delete temp
					free( temp );
					
				}
				
				balance( currPtr );
				
				return true;
			}
			
		}
		
		// Copy Tree - Uses Pre-Order Traversal
		void copyTree(AVLNode< T >* originNode, AVLNode< T >*& destinNode){
			
			// Make the middle node
			destinNode = new AVLNode< T >( originNode->data );
			
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
		void printInOrder( std::ostream& output, const AVLNode< T >* currNode ) const{
			
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
		
		// Printing Pre Order 
		void printPreOrder( std::ostream& output, const AVLNode< T >* currNode ) const{
			
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
		
		
		// Printing Post Order 
		void printPostOrder( std::ostream& output, const AVLNode< T >* currNode ) const{
			
			// Return if currNode is null 
			if( currNode == NULL ){
				return;
			}
			
			// Recursively call the left child 
			printPostOrder( output, currNode->right );
			
			// Recursively call the right child 
			printPostOrder( output, currNode->left );
			
			// Print the middle node first
			output << currNode->data << " ";			
		}
		
		// Printing Post Order 
		void printLevelOrder( std::ostream& output, const AVLNode< T >* treeRoot ) const{
			
			// Return if currNode is null 
			if( treeRoot == NULL ){
				return;
			}
			
			// Create a queue of void pointers
			queue< void * > levelQueue;

			// Cast the treeRoot to void * and push onto the queue
			levelQueue.push( (void *)treeRoot );
			
			// Just like BFS, iterate until the queue is empty
			while( !levelQueue.empty() ){
				
				// Take the address from the front of the queue and 
				// cast to a AVLNode<T>* and set to a temp value currNode
				AVLNode< T >* currNode = ( AVLNode< T >* )levelQueue.front();
				
				// Remove the element from the front of the queue
				levelQueue.pop();
				
				// Print the value to the user
				output << currNode->data << " ";
				
				if( currNode->left != NULL ){
					levelQueue.push( (void *)(currNode->left) );
				}
				
				if( currNode->right != NULL ){
					levelQueue.push( (void *)(currNode->right) );
				}
				
			}
			
		}
		
		// Delete the pointers using post-order traversal
		void deleteNode( AVLNode<T>*& currPtr ){
			
			// Return if NULL
			if( currPtr == NULL ){
				return;
			}
			
			// Recursively delete right
			deleteNode( currPtr->right );
			
			// Recursively delete left
			deleteNode( currPtr->left );
			
			// Delete the current pointer
			free(currPtr);
		}
		
		// Private contains method 
		bool contains( AVLNode<T>* currPtr, const T& element ) const{
			
			// If the node is NULL, return false
			if( currPtr == NULL ){
				return false;
			}
			
			// If the node's data is equal to the element, return true
			if( currPtr->data == element ){
				return true;
			}
			
			// Otherwise, check left is the element is less than the data
			else if( element < currPtr->data ){
				return contains( currPtr->left, element );
			}
			
			// Otherwise, check left is the element is less than the data			
			else{
				return contains( currPtr->right, element );
			}
			
		}
		
		// Private method - Find the minimum element
		AVLNode<T>* findMin( AVLNode<T>* currPtr ) const {
			
			// If the pointer is null, return NULL
			if( currPtr == NULL ){
				return currPtr;
			}
			
			// If there is no way to go left, return currPtr 
			if( currPtr->left == NULL ){
				return currPtr;
			}
			
			// Otherwise, keep going left 
			return findMin( currPtr->left );
		}
		
		
		// Private method - Find the minimum element
		AVLNode<T>* findMax( AVLNode<T>* currPtr ) const {
			
			// If the pointer is null, return NULL
			if( currPtr == NULL ){
				return currPtr;
			}
			
			// If there is no way to go right, return currPtr 
			if( currPtr->right == NULL ){
				return currPtr;
			}
			
			// Otherwise, keep going right 
			return findMax( currPtr->right );
		}
		
		/* Height must be an int to account for negative subtraction in balance */
		int height( const AVLNode<T>* currPtr ) const
		{
			return currPtr == NULL ? 0 : currPtr->height;
		}

		/* Problem 4 Begins Here */
		void balance( AVLNode<T>*& currPtr )
		{
			if( currPtr == NULL )
				return;
			
			int leftHeight = height( currPtr->left );
			int rightHeight = height( currPtr->right );
						
			if( leftHeight - rightHeight > ALLOWED_IMBALANCE ){
				
				if( height( currPtr->left->left ) >= height( currPtr->left->right ) ){
					rotateWithLeftChild( currPtr );
				}
				else{
					doubleWithLeftChild( currPtr );
				}
				
			}
			else if( rightHeight - leftHeight > ALLOWED_IMBALANCE ){
				
				if( height( currPtr->right->right ) >= height( currPtr->right->left ) ){
				
					rotateWithRightChild( currPtr );
					
				}
				else{
					doubleWithRightChild( currPtr );
				}
				
			}
					
			currPtr->height = std::max( height( currPtr->left ), height( currPtr->right ) ) + 1;
			
		}

		void rotateWithLeftChild( AVLNode<T>*& currPtr )
		{
			AVLNode<T>* newRoot = currPtr->left;
			
			currPtr->left = newRoot->right;
			newRoot->right = currPtr;
			
			currPtr->height = std::max( height( currPtr->left ), height( currPtr->right ) ) + 1;
			newRoot->height = std::max( height( newRoot->left ), currPtr->height ) + 1;
			
			currPtr = newRoot;
		}

		/**
		 * Rotate binary tree node with right child.
		 * For AVL trees, this is a single rotation for case 4.
		 * Update heights, then set new root.
		 */
		void rotateWithRightChild( AVLNode<T>*& currPtr )
		{
			AVLNode<T>* newRoot = currPtr->right;
			
			currPtr->right = newRoot->left;
			newRoot->left = currPtr;
			
			currPtr->height = std::max( height( currPtr->left ), height( currPtr->right ) ) + 1;
			newRoot->height = std::max( height( newRoot->right ), currPtr->height ) + 1;
			
			currPtr = newRoot;
		}

		/**
		 * Double rotate binary tree node: first left child.
		 * with its right child; then node k3 with new left child.
		 * For AVL trees, this is a double rotation for case 2.
		 * Update heights, then set new root.
		 */
		void doubleWithLeftChild( AVLNode<T>*& currPtr )
		{
			rotateWithRightChild( currPtr->left );
			rotateWithLeftChild( currPtr );
		}

		/**
		 * Double rotate binary tree node: first right child.
		 * with its left child; then node k1 with new right child.
		 * For AVL trees, this is a double rotation for case 3.
		 * Update heights, then set new root.
		 */
		void doubleWithRightChild( AVLNode<T>* & currPtr )
		{
			rotateWithLeftChild( currPtr->right );
			rotateWithRightChild( currPtr );
		}

		
		// Root node pointer
		AVLNode< T >* root;	
		
		static const int ALLOWED_IMBALANCE = 1;
	
	public:
	
		// Constructor
		AVLTree() : root() {}
	
		// Required Destructor for AVL Tree
		~AVLTree() {
			
			// Recursively delete the pointers
			deleteNode( root ); 
			
		}
		
		// Copy constructor
		AVLTree(const AVLTree<T>& copy) : root(NULL) {
			// If assign.root is NULL, assign is an empty tree
			if( copy.root == NULL ){
				return;
			}
			
			// Set the root to the new data
			root = new AVLNode< T >( copy.root->data );
			
			// Set the root to the new data
			copyTree(copy.root, root);
		}
		
		// Assignment operator
		AVLTree<T>& operator=(const AVLTree<T>& assign){
			
			if( this != &assign ){
				// If assign.root is NULL, assign is an empty tree
				if( assign.root == NULL ){
					return *this;
				}
				
				// Set the root to the new data
				root = new AVLNode< T >( assign.root->data );
				
				// Set the root to the new data
				copyTree(assign.root, root);
			}
			
			return *this;	// Return de-referenced class ptr
		}
		
		// Public Insert Method
		void Insert( const T& value ){
			
			Insert( root, value );
			
		}
		
		// Public Contains Method
		bool contains( const T& element ) const {
			
			return contains( root, element );
			
		}
		
		T returnRootVal() const{
			
			return root->data;
			
		}
		
		// Public findMin method
		AVLNode<T>* findMin(){
			
			return findMin( root );
			
		}
		
		// Public findMax method
		AVLNode<T>* findMax(){
			
			return findMax( root );
			
		}
		
		void printPreOrder( std::ostream& output ) const{
			
			printPreOrder( output, root );
			
		}

		void printLevelOrder( std::ostream& output ) const{
			
			printLevelOrder( output, root );
			
		}
		
		void printInOrder( std::ostream& output ) const{
			
			printInOrder( output, root );
			
		}
		
		void printPostOrder( std::ostream& output ) const{
			
			printPostOrder( output, root );
			
		}
		
		// Print the InOrder and Pre-Order Traversal 
		friend std::ostream& operator<<( std::ostream& output, const AVLTree<T>& theTree ){
			
			// Pass the ostream and the root to print in order recursively
			output << "In-Order  : ";
			theTree.printInOrder( output, theTree.root );
			
			output << "\nPre-Order : ";
			theTree.printPreOrder( output, theTree.root );
			
			output << "\nPost-Order: ";
			theTree.printPostOrder( output, theTree.root );
			
			output << "\nLevel-Order: ";
			theTree.printLevelOrder( output, theTree.root );
			
			return output;
			
		}
};

#endif