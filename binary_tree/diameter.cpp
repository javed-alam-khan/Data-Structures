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

int height(Node<int>* root)
{
	if(root == NULL)
		return 0;
	int lh = height(root->left);
	int rh = height(root->right);
	return 1 + max(lh, rh);
}

int diameter(Node<int>* root)
{
	if(root == NULL)
		return 0;
	int lh = height(root->left);
	int rh = height(root->right);
	int store = lh + rh;
	int ld = diameter(root->left);
	int rd = diameter(root->right);
	return max(max(store, ld), rd);
}

int main()
{
	Node<int>* root = inputLevelWise();
	cout << "diameter " << diameter(root) << endl;
	delete root;
	return 0;
}