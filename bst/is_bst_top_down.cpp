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


bool isBSTTd(Node<int>* root, int min = INT_MIN, int max = INT_MAX)
{
	if(root == NULL)
		return true;
	if(root->data < min || root->data > max)
		return false;
	bool isLeftOk = isBSTTd(root->left, min, root->data - 1);
	bool isRightOk = isBSTTd(root->right, root->data, max);
	return isLeftOk && isRightOk;
}

int main()
{
	Node<int>* root = inputLevelWise();
	bool result = isBSTTd(root);
	if(result)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	delete root;
	return 0;
}