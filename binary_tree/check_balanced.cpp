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
	int lH = height(root->left);
	int rH = height(root->right);
	return 1 + max(lH,rH);
}


bool isBalanced(Node<int>* root)
{
	if(root == NULL)
		return true;
	bool b1 = isBalanced(root->left);
	bool b2 = isBalanced(root->right);
	if(b1 && b2)
	{
		int lH = height(root->left);
		int rH = height(root->right);
		if(abs(lH-rH) <= 1)
			return true;
		else
			return false;
	}
	else
		return false;
}

int main()
{
	Node<int>* root = inputLevelWise();
	if(isBalanced(root))
		cout << "True" << endl;
	else
		cout << "False" << endl;
	delete root;
	return 0;
}