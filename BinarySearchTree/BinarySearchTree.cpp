#include <iostream>
#include <string>
using namespace std;

class Node
{
public :
	string info;
	Node* LeftChild;
	Node* RightChild;

	//Constructor for the node class
	Node(string i, Node* L, Node* R)
	{
		info = i;
		LeftChild = L;
		RightChild = R;
	}
};

class BinaryTree
{
public :
	Node* ROOT;

	BinaryTree()
	{
		ROOT = NULL;	// Initializing ROOT to NULL
	}

	void insert(string element)		// Insert a node in the binary search tree
	{
		Node* newNode = new Node(element, NULL, NULL);	// Allocate memory for the new node
		newNode->info = element;	// Assign value to the data field of the new node
		newNode->LeftChild = NULL;	// Make the left child of the new node point to NULL
		newNode->RightChild = NULL;	// Make the right child of the new node point to NULL
	}
};