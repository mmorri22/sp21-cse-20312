#ifndef DLLIST_H
#define DLLIST_H

#include "Node.h"

#include <cstdlib>
#include <iostream>

template<class T>
class DLList{
	
	private:
		
		node<T>* head;	// Head pointer for Doubly-Linked List
		node<T>* tail; // Tail point for Doubly-Linked List
		
	public:
	
		/* Default Constructor */
		DLList() : head(NULL), tail(NULL) {}
		
		
		/* Destructor */
		~DLList(){
			
			delete head;
			// delete tail;
		}
		
		
		/* Copy Constructor */
		DLList(const DLList<T>& copy) : head(NULL), tail(NULL) {
			
			node<T>* curr = copy.head;
			
			while(curr != NULL){
				
				Insert(curr->data);
					
				curr = curr->next;
				
			}
		}
	
		/* Assignment Operator */
		DLList<T>& operator=(const DLList<T>& assign){
				
			if(this != &assign){
				
				node<T>* curr = assign.head;
				
				while(curr != NULL){
					
					this->Insert(curr->data);
						
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
		void Insert (const T& value)
		{
		   node<T>* temp = new node<T>(value);

		   if ( IsEmpty() )
		   {
			   head = temp;
			   tail = temp;
		   }
		   else
		   {
			  node<T>* prev =  NULL;
			  node<T>* curr = head;

			  /* traverse the list until the end */
			  while (curr != NULL)
			  {
				 prev = curr;
				 curr = curr->next;
			  }
		  
			  /* insert the node, temp, at the end */
			  prev -> next = temp;
			  
			  /* Allocate the previous node */
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
		void push_front(const T& value){
			
			// Create new node
			node<T>* temp = new node<T>(value);
			
			// Set temp->next = head
			temp -> next = head;
			
			// Set head equal to temp
			head = temp;
			
		}
		
		
		void push_back(const T& value){
			
			if( IsEmpty() ){
				Insert( value );
			}
			else{
				
				node<T>* temp = new node<T>(value);
				
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
		bool Delete (const T& target)
		{

			/* Step 11 - Define nodes */
			
			
			/* Is Empty Case */
			if (IsEmpty ())
			{
				std::cout << "Can't delete from an empty list" << std::endl;
				return (-1);
			}
			
			/* Case if we are deleting the head node */
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

			/* Step 12 - Non-Empty Case */
			
		}


		/********************************************
		* Function Name  : IsEmpty
		* Pre-conditions : node* head
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
				
				node<T>* curr = head;
				
				while (curr != NULL && curr -> data != searchVal){
					curr = curr -> next;
				}

				return curr != NULL;
			}
		}


		/********************************************
		* Function Name  : operator<<
		* Pre-conditions : std::ostream& output, const DLList<T>& theList 
		* Post-conditions: std::ostream&
		* 
		* Overloaded friend ostream operator for DLList 
		********************************************/
		friend std::ostream& operator<<( std::ostream& output, const DLList<T>& theList ){
			
		   node<T>* curr;

		   if (theList.IsEmpty())
		   {
			  output << "The list is empty" << std::endl;;
		   }
		   else
		   {
			  /* set the current pointer to the first
			  ** node of the list */
			  curr = theList.head;

			  /* Until the end of the list */
			  while (curr != NULL)
			  {
				  /* print the current data item */
				  output << curr->data << " " << std::endl;

				  /* move to the next node */
				  curr = curr -> next;
			  }
		   } 

		   return output;
		}

};

#endif
