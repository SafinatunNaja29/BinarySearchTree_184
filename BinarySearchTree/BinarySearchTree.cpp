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
};