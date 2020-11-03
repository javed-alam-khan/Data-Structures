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

void printDepthK(Node<int>* root, int k)
{
	if(root == NULL || k<0)
		return;
	if(k == 0)
	{
		cout << root->data << endl;
		return;
	}
	printDepthK(root->left, k-1);
	printDepthK(root->right, k-1);
}

int nodesAtDistanceK(Node<int> *root, int data, int k) 
{
	if(root==NULL || k<0)
		return -1;
	if(root->data == data)
	{
		printDepthK(root, k);
		return 0;
	}
	int lD = nodesAtDistanceK(root->left, data, k);
	if(lD != -1)
	{
		if(k-lD-1 == 0)
			cout << root->data << endl;
		else
			printDepthK(root->right, k-lD-2);
		return lD + 1;
	}
	int rD = nodesAtDistanceK(root->right, data, k);
	if(rD != -1)
	{
		if(k-rD-1 == 0)
			cout << root->data << endl;
		else
			printDepthK(root->left, k-rD-2);
		return rD + 1;
	}
	return rD;
}

int main()
{
	Node<int>* root = inputLevelWise();
	int data;
	cin >> data;
	int k;
	cin >> k;
	nodesAtDistanceK(root, data, k);
	delete root;
	return 0;
}

// 3 5 1 6 2 0 8 -1 -1 7 4 -1 -1 -1 -1 -1 -1 -1 -1
// 3 1 5 0 8 6 2 -1 -1 -1 -1 -1 -1 7 4 -1 -1 -1 -1
