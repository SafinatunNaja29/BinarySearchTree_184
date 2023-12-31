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
	
		Node* parent = NULL;
		Node* currentNode = NULL;
		Search(element, parent, currentNode);	// Locate the node which will be the parent of the node to be inserted
	
		if (parent == NULL)	// if the parrent is NULL (Tree is empty)
		{
			ROOT = newNode;	// Mark the new node as ROOT
			return;	// Exit
		}

		if (element < parent->info)	// if the value in the data field of the new node is less than that of the parent
		{
			parent->LeftChild = newNode;	// make the left child of the parent point to the new node
		}
		else if (element > parent->info)		// if the value in the data field of the new node is greather than that of the parent
		{
			parent->RightChild = newNode;	// make the right child of the parent point to the new node
		}
	}

	void Search(string element, Node*& parent, Node*& currentNode)
	{
		// This function searches the currentNode of the speciefed Node as well as the current Node of its parent
		currentNode = ROOT;
		parent = NULL;
		while ((currentNode != NULL) && (currentNode->info != element))
		{
			parent = currentNode;
			if (element < currentNode->info)
				currentNode = currentNode->LeftChild;
			else
				currentNode = currentNode->RightChild;
		}
	}

	void inorder(Node* ptr)
	{
		if (ROOT == NULL)
		{
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr->LeftChild);
		{
			inorder(ptr->LeftChild);
			cout << ptr->info << " ";
			inorder(ptr->RightChild);
		}
	}

	void preorder(Node* ptr)
	{
		if (ROOT == NULL)
		{
			cout << "Tree is empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			cout << ptr->info << " ";
			preorder(ptr->LeftChild);
			preorder(ptr->RightChild);
		}
	}

	void postorder(Node* ptr)
	{
		 //Performs the postorder traversal of the tree
		if (ROOT == NULL)
		{
			cout << "Tree us empty" << endl;
			return;
		}
		if (ptr != NULL)
		{
			postorder(ptr->LeftChild);
			postorder(ptr->RightChild);
			cout << ptr->info << " ";
		}
	}
};

int main()
{
	BinaryTree obj;
	while (true)
	{
		cout << "\nMenu" << endl;
		cout << "1. Implement insert operation" << endl;
		cout << "2. Perform inorder traversal" << endl;
		cout << "3. Perform preorder operation" << endl;
		cout << "4. Perform postorder operation" << endl;
		cout << "5. Exit" << endl;
		cout << "\nEnter your choice (1-5) : ";

		char ch;
		cin >> ch;
		cout << endl;

		switch (ch)
		{
		case '1':
		{
			cout << "Enter a word : ";
			string word;
			cin >> word;
			obj.insert(word);
			break;
		}
		case '2':
		{
			obj.inorder(obj.ROOT);
			break;
		}
		case '3':
		{
			obj.inorder(obj.ROOT);
			break;
		}
		case '4':
		{
			obj.inorder(obj.ROOT);
			break;
		}
		case '5':
			return 0;
		default:
		{
			cout << "Invalid option" << endl;
			break;
		}
		}
	}
}