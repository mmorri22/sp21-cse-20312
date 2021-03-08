/**********************************************
* File: DLList.h
* Author: Matthew Morrison
* Email: matt.morrison@nd.edu
* 
* This file contains the function definitions and 
* structs for a Linked List Data structure 
**********************************************/

#ifndef DLLIST_H
#define DLLIST_H

#include <cstdlib>
#include <iostream>
#include "DLLNode.h"

template<class T>
class DLList{
	
	private:
		
		DLLNode<T>* head;	// Head pointer for Doubly-Linked List
		DLLNode<T>* tail; 	// Tail point for Doubly-Linked List
		
	public:
	
		/********************************************
		* Function Name  : DLList
		* Pre-conditions : none
		* Post-conditions: none
		* 
		* DLList Default Constructor 
		********************************************/
		DLList() : head(NULL), tail(NULL) {}
		
		
		/********************************************
		* Function Name  : ~DLList
		* Pre-conditions : none
		* Post-conditions: none
		* 
		* Singly Linked List Destructor 
		********************************************/
		~DLList(){
			
			delete head;

		}
		
		
		/********************************************
		* Function Name  : DLList
		* Pre-conditions : const DLList<T>& copy
		* Post-conditions: none
		* 
		* Copy Constructor for Singly Linked List 
		********************************************/
		DLList(const DLList<T>& copy) : head(NULL), tail(NULL) {
			
			DLLNode<T>* prev = NULL;
			DLLNode<T>* curr = copy.head;
			
			while(curr != NULL){
				
				Insert(curr->data);
					
				prev = curr;
				curr = curr->next;
				
			}

		}
	
		/********************************************
		* Function Name  : operator=
		* Pre-conditions : const DLList<T>& assign
		* Post-conditions: DLList<T>&
		* 
		* Assignment Operator for Singly Linked List 
		********************************************/
		DLList<T>& operator=(const DLList<T>& assign){
				
			if(this != &assign){
				
				DLLNode<T>* prev = NULL;
				DLLNode<T>* curr = assign.head;
				
				while(curr != NULL){
					
					this->Insert(curr->data);
						
					prev = curr;
					curr = curr->next;
					
				}
			}
			return *this;
			
		}

		/********************************************
		* Function Name  : Insert
		* Pre-conditions : int value
		* Post-conditions: void   
		* 
		* Creates a Node with value, and inserts at 
		* the end of the Singly Linked List
		********************************************/
		void Insert (T value)
		{
		   DLLNode<T>* temp = new DLLNode<T>(value);

		   if ( IsEmpty() )
		   {
			   head = temp;
			   tail = temp;
		   }
		   else
		   {
			  DLLNode<T>* prev =  NULL;
			  DLLNode<T>* curr = head;

			  /* traverse the list until the end */
			  while (curr != NULL)
			  {
				 prev = curr;
				 curr = curr->next;
			  }
		  
			  /* insert the DLLNode, temp, at the end */
			  prev -> next = temp;
			  
			  /* Allocate the previous DLLNode */
			  prev -> next -> prev = prev;
			  
			  /* Allocate tail */
			  tail = prev -> next;
		   }
		}
		
		
		/********************************************
		* Function Name  : push_front
		* Pre-conditions : T value
		* Post-conditions: none
		* 
		* Puts the element at the front
		* For O(1) insert time
		********************************************/
		void push_front(T value){
			
			// Create new DLLNode
			DLLNode<T>* temp = new DLLNode<T>(value);
			
			// Set temp->next = head
			temp -> next = head;
			
			// Set head equal to temp
			head = temp;
			
		}
		
		
		void push_back(T value){
			
			if( IsEmpty() ){
				Insert( value );
			}
			else{
				
				DLLNode<T>* temp = new DLLNode<T>(value);
				
				temp->prev = tail;
				
				tail->next = temp;
				
				tail = temp;
				
			}
			
			
		}


		/********************************************
		* Function Name  : Delete
		* Pre-conditions : int data
		* Post-conditions: int    
		*  
		* Delets the first instance of data. Returns -1 
		* if not found
		********************************************/
		bool Delete (T target)
		{
		   DLLNode<T>* temp = new DLLNode<T>(); DLLNode<T>* prev = new DLLNode<T>(); DLLNode<T>* curr = new DLLNode<T>();

		   if (IsEmpty ())
		   {
			  std::cout << "Can't delete from an empty list" << std::endl;
			  return (-1);
		   }

		   /* if the target value is the first in the list, move head */
		   else if (target == head -> data)
		   {
			   
			   if( head == tail ){
				   temp = head;
				   head = NULL;
				   tail = NULL;
				   free(temp);
				   return true;
			   }
			   else{
			   
				  temp = head;
				  head = head -> next;
				  head->prev = NULL;
				  free (temp);
				  return true;
			  
			   }
		   }
		   
		   /* traverse the list until the target value is found */
		   else
		   {
			  prev = head;
			  curr = head -> next;

			  while (curr != NULL && curr -> data != target)
			  {
				 prev = curr;
				 curr = curr -> next;
			  }
			  
			  if(curr != NULL)
			  {
				/* delete the DLLNode the contains the target value */
				temp = curr;
				
				if(curr == tail){
					tail = prev;
				}
				
				prev -> next = curr -> next;
				free(temp);
				
				if(prev->next != NULL){
					
					prev->next->prev = prev;
				}
				
				return true;
			  }
			  else
			  {
				std::cout << target << " was not in the list" << std::endl;
				return false;
			  }
		   }      
		}


		/********************************************
		* Function Name  : IsEmpty
		* Pre-conditions : DLLNode<T>* head
		* Post-conditions: int    
		* 
		* Bool returns if the list contains values
		********************************************/
		bool IsEmpty () const{
			
			return head == NULL && tail == NULL;
		   
		}
		
		
		/********************************************
		* Function Name  : contains
		* Pre-conditions : const T& searchVal
		* Post-conditions: bool
		* 
		* Returns whether the list contains the element 
		********************************************/
		bool contains(const T& searchVal) const{

		   if (IsEmpty()) {
			   
			  return false;
			  
			}
			else{
				
				DLLNode<T>* prev =  NULL;
				DLLNode<T>* curr = head;
				
				while (curr != NULL && curr -> data != searchVal){
					prev = curr;
					curr = curr -> next;
				}

				return curr != NULL;
			}
		}
		
		
		void merge(DLList<T>& mergeList){

			/* Problem 2 starts here */

			/* Part 1 */

			/* Part 2 */

			/* Part 3 */

			/* Part 4 */

			/* Part 5 */
		}
		
		
		
		void merge2Sorted(DLList<T>& mergeList){

			if( this->IsEmpty() || mergeList.IsEmpty() ){
				
				std::cout << "A List is empty. No merge" << std::endl;
				return;
				
			}
			
			// Set DLLNode pointers to head DLLNodes 
			DLLNode<T>* first_curr = this->head;
			DLLNode<T>* second_curr = mergeList.head;
			DLLNode<T>* first_next;
			DLLNode<T>* second_next;
			
			// Set mergeList.head to NULL
			mergeList.head = NULL;	
			
			// Set the larger value to this->head 
			if( first_curr->data > second_curr->data ){
				
				this->head = second_curr;
				
			}
			
			while(first_curr != NULL && second_curr != NULL){
				
				// Four cases 
				first_next = first_curr->next;
				second_next = second_curr->next;
					
				// Case 1 - Neither is at end and 
				if( first_next != NULL && second_next != NULL ){
					
					// If first < second 
					if( first_curr->data < second_curr->data ){
						
						// Now, we check if first_next is greater than second_curr 
						if( first_next->data >= second_curr->data ){
							
							// Now we can put 2nd curr between first next and second next
							first_curr->next = second_curr;
							first_next->prev = second_curr;
							
							second_curr->prev = first_curr;
							second_curr->next = first_next;
							
							// Now that we've put second_curr in between, move to second_next 
							second_curr = second_next;
						}
						
						else{
						
							// Otherwise, this means don't put second_curr between 
							// Just move first curr 
							first_curr = first_next;
						
						}
					}
					
					// Next, we check for if second <= first 
					else{
						
						// Now, we check if first_next is greater than second_curr 
						if( second_next->data >= first_curr->data ){
						
							// Now we can put 1st curr between second next and 1st next
							second_curr->next = first_curr;
							second_next->prev = first_curr;
							
							first_curr->prev = second_curr;
							first_curr->next = second_next;
							
							// Now that we've put first_curr in between, move to first_next 
							first_curr = first_next;
						
						}
						else{
							// Otherwise, this means don't put second_curr between 
							// Just move first curr 
							second_curr = second_next;	
						}						
					}
				}
				
				// If second_curr-> next == NULL
				else if( first_curr->next != NULL ){
					
					// Means there is at lease one more in first 
					// But second is at its end 
					if( second_curr->data <= first_curr->data ){
					
						second_curr->next = first_curr;
						
						first_curr->prev = second_curr;
						
						second_curr = second_next;
					}
					else if( first_curr->data < second_curr->data 
						&& first_next->data >= second_curr->data ){
						
						first_curr->next = second_curr;
						second_curr->prev = first_curr;
						first_next->prev = second_curr;
						second_curr->next = first_next;
						
						second_curr = second_next;
					}
					else{
						
						first_curr = first_next;
					}
					
				}
				
				// If second_curr->next == NULL 
				else if ( second_curr->next != NULL ){
					
					
					// Means there is at lease one more in second 
					// But first is at its end 
					
					if( first_curr->data <= second_curr->data ){
					
						first_curr->next = second_curr;
						
						second_curr->prev = first_curr;
						
						first_curr = first_next;
					}
					else if( second_curr->data < first_curr->data && second_next->data >= first_curr->data ){
						
						second_curr->next = first_curr;
						first_curr->prev = second_curr;
						second_next->prev = first_curr;
						first_curr->next = second_next;
						
						first_curr = first_next;
					}
					else{
						
						second_curr = second_next;
					}			
				}
				
				// At the end of both lists
				else{
					
					if( first_curr->data < second_curr->data ){
						
						first_curr->next = second_curr;
						second_curr->prev = first_curr;
						
						this->tail = second_curr;
						
						first_curr = first_next;
						second_curr = second_next;
					}
					else{
						
						second_curr->next = first_curr;
						first_curr->prev = second_curr;
						
						first_curr = first_next;
						second_curr = second_next;						
						
					}
					
				}
				
				//std::cout << *this << std::endl;
			}
			
			if(first_curr != this->tail){
			
				this->tail = mergeList.tail;
			
			}

			// Set mergeList.tail to NULL
			mergeList.tail = NULL;	

		}

		/********************************************
		* Function Name  : operator<<
		* Pre-conditions : std::ostream& output, const DLList<T>& theList 
		* Post-conditions: std::ostream&
		* 
		* Overloaded friend ostream operator for DLList 
		********************************************/
		friend std::ostream& operator<<( std::ostream& output, const DLList<T>& theList ){
			
		   DLLNode<T>* curr;

		   if (theList.IsEmpty())
		   {
			  output << "The list is empty";
		   }
		   else
		   {
			  /* set the current pointer to the first
			  ** DLLNode of the list */
			  curr = theList.head;

			  /* Until the end of the list */
			  while (curr != NULL)
			  {
				  /* print the current data item */
				  output << curr->data << " ";

				  /* move to the next DLLNode */
				  curr = curr -> next;
			  }
		   } 

		   return output;
		}

};

#endif
