#include "../inc/DLList.h"
#include "../inc/MaxHeap.h"
#include "../inc/DynArr.h"
#include <ctime>

#define COUT std::cout
#define ENDL std::endl

const long unsigned int MAXLISTS = 20;
const long unsigned int MAXVALS = 50;

/* Put the SortKLists Method Here */ 


int main(){
	
	/* Create a Dynamic Array of Doubly Linked Lists of ints */
	
	
	/* Seed the random number generator */
	
	
	/* Create a number of lists between 1 and 20 */
	
	
	/* For the number of lists, create a Doubly Linked List and push back */
	 
	
		/* Create a temporary List */
		
		
		/* Put the temporary List into the kSortedLists */
		
	
	
	/* Get a random number of values between 0 and 40 */
	
	
	/* Do not push if the number of lists is 0 */
	
		
		
			
			/* Get a random list */
			
			
			/* Get a random integer */
			
			
			/* Put the random integer into the randomly selected list */
			
		
		
	
	
	/* Print the generated lists to the user */
	COUT << "There are " << kSortedLists.size() << " lists to sort ";
	COUT << " and there are " << numValues << " in those lists:" << ENDL;
	for( long unsigned int iter = 0; iter < kSortedLists.size(); iter++ ){
		
		COUT << "List " << iter + 1 << ": " << kSortedLists[iter] << ENDL;
		
	}
	
	/* Sort the k lists */
	//DLList<int> result = SortKLists( kSortedLists);
	
	//COUT << ENDL << "Final Sorted List: " << result << ENDL;
	
}
