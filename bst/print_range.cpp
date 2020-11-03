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

void elementsInRangeK1K2(Node<int>* root, int k1, int k2)
{
	if(root == NULL)
		return;
	if(root->data >= k1 && root->data <= k2)
	{
		elementsInRangeK1K2(root->left, k1, k2);
		cout << root->data << " ";
		elementsInRangeK1K2(root->right, k1, k2);
	}
	else if(root->data < k1)
		elementsInRangeK1K2(root->right, k1, k2);
	else if(root->data > k2)
		elementsInRangeK1K2(root->left, k1, k2);
}


int main()
{
	Node<int>* root = inputLevelWise();
	int k1;
	int k2;
	cin >> k1;
	cin >> k2;
	elementsInRangeK1K2(root, k1, k2);
	cout << endl;
	delete root;
	return 0;
}