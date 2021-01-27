#include <iostream>
#include <cstdlib>
#include <vector>

// Added queue class 
#include "../include/queue.h"

#define COUT std::cout
#define ENDL std::endl
#define VECTOR std::vector

// queue SearchNode used in BFS
struct SearchNode
{
	
	int x;	// x value of the coordinate 
	int y;	// y value of the coordinate
	int dist;	// Distance traveled from source
	
	SearchNode(  ) : x(), y(), dist() {}
	
	SearchNode( int xIn, int yIn, int distIn ) : x(xIn), y(yIn), dist(distIn) {}

};

/********************************************
* Function Name  : isValid
* Pre-conditions : int matrix[][N], bool visited[][N], int rowVal, int colVal
* Post-conditions: bool
*  
* Determines if the matrix move is valid.
* Checks if (rowVal,colVal) is a valid position 
********************************************/
bool isValid(const VECTOR< VECTOR<int> >& matrix, const VECTOR< VECTOR<int> >& visited, int rowVal, int colVal)
{
	return (rowVal >= 0) 		// rowVal greater than or equal to 0, so inside the maze
			&& (rowVal < (int)visited.size() ) 	// rowVal is less than M, so inside the maze 
			&& (colVal >= 0) 	// colVal greater than or equal to 0, so inside the maze
			&& (colVal < (int)matrix.at(0).size() )		// colVal is less than M, so inside the maze 
			&& matrix[rowVal][colVal] 		// if matrix[rowVal][colVal] is true, then valid move
			&& !visited[rowVal][colVal];	// if visited[rowVal][colVal] is false, then not yet visited
}

void BFS(const VECTOR< VECTOR<int> >& matrix, int orig_x, int orig_y, int dest_x, int dest_y)
{
	
	COUT << "Searching from (" << orig_x << ", " << orig_y << ")";
	COUT << " to (" << dest_x << ", " << dest_y << ")..." << ENDL;
	
	// If the origin is false, then the matrix cannot be solved
	if( !matrix[orig_x][orig_y] ){
		
		COUT << "The origin at [" << orig_x << "][" << orig_y << "] is inaccessible" << ENDL;
		
		return;
		
	}
	
	// Brace Initializer Lists for Visited
	VECTOR< VECTOR<int> > visited;
	
	VECTOR<int> line0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line0);
	VECTOR<int> line1 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line1);
	VECTOR<int> line2 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line2);
	VECTOR<int> line3 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line3);
	VECTOR<int> line4 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line4);
	VECTOR<int> line5 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line5);
	VECTOR<int> line6 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line6);
	VECTOR<int> line7 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line7);
	VECTOR<int> line8 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line8);
	VECTOR<int> line9 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	visited.push_back(line9);
	
	queue< SearchNode > theQueue;
	
	// Mark the origin as visited
	visited[orig_x][orig_y] = true;
	
	// Push the origin onto the queue
	theQueue.push({orig_x, orig_y, 0});
	
	// stores length of longest path from source to destination
	// Every single possible SearchNode in the array visited once
	int min_dist = (int)matrix.size() * (int)matrix.at(0).size() + 1;
	
	// Case 3 - The queue is empty, we run out of cases 
	while (!theQueue.empty())
	{
		// Get the front SearchNode and evaluate the BFS
		SearchNode frontSearchNode = theQueue.front();
		theQueue.pop();
		
		// Set iterarors to the x and y coordinate, and get the current distance
		int iter = frontSearchNode.x, jter = frontSearchNode.y, dist = frontSearchNode.dist;
		
		// Case 1 - If we found the values, we found the destination
		if (iter == dest_x && jter == dest_y)
		{
			min_dist = dist;
			break;
		}
		
		// Next, we check for all elements 
		// First, check down
		if( isValid( matrix, visited, iter + 1, jter ) ){
			
			visited[ iter + 1 ][ jter ] = true;
			
			theQueue.push( SearchNode( iter + 1, jter, frontSearchNode.dist + 1 ) );
		}
		
		// Next, check right
		if( isValid( matrix, visited, iter, jter + 1 ) ){
			
			visited[ iter ][ jter + 1 ] = true;
			
			theQueue.push( SearchNode( iter, jter + 1, frontSearchNode.dist + 1 ) );
		}
		
		// Next, check up
		if( isValid( matrix, visited, iter - 1, jter ) ){
			
			visited[ iter - 1 ][ jter ] = true;
			
			theQueue.push( SearchNode( iter - 1, jter, frontSearchNode.dist + 1 ) );
		}
		
		// Finally, check left
		if( isValid( matrix, visited, iter, jter - 1 ) ){
			
			visited[ iter ][ jter + 1 ] = true;
			
			theQueue.push( SearchNode( iter, jter - 1, frontSearchNode.dist + 1 ) );
		}
		
	}
	
	// If min_dist is less than N*M, then the length has been found
	if (min_dist != (int)matrix.size() * (int)matrix.at(0).size() + 1)
		COUT << "The shortest path from source to destination "
				"has length " << min_dist << ENDL;
	else
		COUT << "Destination can't be reached from given source" << ENDL;
	
}

int main(){
	
	// Brace Initializer Lists
	VECTOR< VECTOR<int> > matrix;
	
	VECTOR<int> line0 = { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 };
	matrix.push_back(line0);
	VECTOR<int> line1 = { 0, 1, 1, 1, 1, 1, 0, 1, 0, 1 };
	matrix.push_back(line1);
	VECTOR<int> line2 = { 0, 0, 1, 0, 1, 1, 1, 0, 0, 1 };
	matrix.push_back(line2);
	VECTOR<int> line3 = { 1, 0, 1, 1, 1, 0, 1, 1, 0, 1 };
	matrix.push_back(line3);
	VECTOR<int> line4 = { 0, 0, 0, 1, 0, 0, 0, 1, 0, 1 };
	matrix.push_back(line4);
	VECTOR<int> line5 = { 1, 0, 1, 1, 1, 0, 0, 1, 1, 0 };
	matrix.push_back(line5);
	VECTOR<int> line6 = { 0, 0, 0, 0, 1, 0, 0, 1, 0, 1 };
	matrix.push_back(line6);
	VECTOR<int> line7 = { 0, 1, 1, 1, 1, 1, 1, 1, 0, 0 };
	matrix.push_back(line7);
	VECTOR<int> line8 = { 1, 1, 1, 1, 1, 0, 0, 1, 1, 1 };
	matrix.push_back(line8);
	VECTOR<int> line9 = { 0, 0, 1, 0, 0, 1, 1, 0, 0, 1 };
	matrix.push_back(line9);

	
	BFS(matrix, 0, 0, 7, 5);

	
	return 0;
	
}