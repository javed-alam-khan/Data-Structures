# include <iostream>
# include "binary_tree_node.h"
# include <queue>
using namespace std;

void print(Node<int>* root)
{
	// Base condition
	if(root == NULL)
		return;
	cout << root->data << " :";
	if(root->left != NULL)
		cout << " L" <<root->left->data;
	if(root->right != NULL)
		cout << " R" <<root->right->data;
	cout << endl;
	// Recursive call on left child
	print(root->left);
	// Recursive call on right child
	print(root->right); 
}

Node<int>* inputLevelWise()
{
	// Root input
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if(rootData == -1)
		return NULL;
	Node<int>* root = new Node<int>(rootData);

	// A queue for storing node addresses
	queue< Node<int>* > q;
	q.push(root);
	while(q.empty() != true)
	{
		int childData;
		Node<int>* front = q.front();
		q.pop();
		Node<int>* child;

		// Left child input
		cout << "Enter left child data of Node " << front->data  << endl;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->left = child;
		}
		
		// Right child input
		cout << "Enter right child data of Node " << front->data  << endl;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->right = child;
		}
	}
	// Returning root of built binary tree
	return root;
}

int main()
{
	Node<int>* root = inputLevelWise();
	cout << "binary tree :" << endl;
	// Printing binary tree
	print(root);
	delete root;
	return 0;
}