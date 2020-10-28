# include <iostream>
# include "binary_tree_node.h"
# include <queue>
using namespace std;
Node<int>* inputLevelWise()
{
	// Root input
	int rootData;
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
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->left = child;
		}
		// Right child input
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

void inOrder(Node<int>* root)
{
	if(root == NULL)
		return;
	inOrder(root->left);
	cout << root->data << " ";
	inOrder(root->right);
}

void preOrder(Node<int>* root)
{
	if(root == NULL)
		return;
	cout << root->data << " ";
	preOrder(root->left);
	preOrder(root->right);
}

void postOrder(Node<int>* root)
{
	if(root == NULL)
		return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
}

int main()
{
	cout << "Enter the elements" << endl;
	Node<int>* root = inputLevelWise();
	// inOrder(root);
	preOrder(root);
	// postOrder(root);
	cout << endl;
	delete root;
	return 0;
}