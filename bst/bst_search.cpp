# include <iostream>
# include "binary_tree_node.h"
# include <queue>
using namespace std;

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

Node<int>* searchInBST(Node<int>* root, int x)
{
	if(root == NULL)
		return NULL;
	if(x == root->data)
		return root;
	else if(x < root->data)
		searchInBST(root->left, x);
	else
		searchInBST(root->right, x);
}


int main()
{
	Node<int>* root = inputLevelWise();
	int x;
	cin >> x;
	Node<int>* result = searchInBST(root, x);
	if(result != NULL)
		cout << result->data << endl;
	else
		cout << "NULL" << endl;
	delete root;
	return 0;
}