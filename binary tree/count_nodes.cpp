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

int count_nodes(Node<int>* root)
{
	if(root == NULL)
		return 0;
	int lc = count_nodes(root->left);
	int rc = count_nodes(root->right);
	return 1+lc+rc;
}
int main()
{
	cout << "Enter the elements" << endl;
	Node<int>* root = inputLevelWise();
	cout << count_nodes(root) << endl;
	delete root;
	return 0;
}