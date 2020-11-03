# include <iostream>
# include "binary_tree_node.h"
# include <queue>
# include <climits>
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
		// cout << "Enter left child data of Node " << front->data  << endl;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->left = child;
		}
		
		// Right child input
		// cout << "Enter right child data of Node " << front->data  << endl;
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

int maximum(Node<int>* root)
{
	if(root == NULL)
		return INT_MIN;
	int tmp = max(maximum(root->left), maximum(root->right));
	int r = max(root->data, tmp);
	return r;
}

int minimum(Node<int>* root)
{
	if(root == NULL)
		return INT_MAX;
	int tmp = min(minimum(root->left), minimum(root->right));
	int r = min(root->data, tmp);
	return r;
}

int height(Node<int>* root)
{
	if(root == NULL)
		return 0;
	int lH = height(root->left);
	int rH = height(root->right);
	return 1 + max(lH, rH);
}

bool isBST(Node<int>* root)
{
	if(root == NULL)
		return true;
	int l = maximum(root->left);
	int r = minimum(root->right);
	bool r1 = (l < root->data);
	bool r2 = (root->data <= r);
	bool r3 = isBST(root->left);
	bool r4 = isBST(root->right);
	bool result = (r1 && r2 && r3 && r4);
	return result;
}

int largestBSTSubtree(Node<int>* root)
{
	if(isBST(root))
	{
		return height(root);
	}
	int l = largestBSTSubtree(root->left);
	int r = largestBSTSubtree(root->right);
	return max(l, r);
}

int main()
{
	Node<int>* root = inputLevelWise();
	cout << largestBSTSubtree(root) << endl;
	delete root;
	return 0;
}