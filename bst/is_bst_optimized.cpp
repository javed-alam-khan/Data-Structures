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

class BSTParams
{
	public:
	int minimum;
	int maximum;
	bool checkBST;
};


BSTParams isBSTOptim(Node<int>* root)
{
	BSTParams output;
	if(root == NULL)
	{
		output.minimum = INT_MAX;
		output.maximum = INT_MIN;
		output.checkBST = true;
		return output;
	}
	BSTParams leftOutput;
	BSTParams rightOutput;
	leftOutput = isBSTOptim(root->left);
	rightOutput = isBSTOptim(root->right);
	output.minimum = min(root->data, leftOutput.minimum);
	output.maximum = max(root->data, rightOutput.maximum);
	output.checkBST = (leftOutput.checkBST) && (rightOutput.checkBST) && 
	(leftOutput.maximum < root->data) && (root->data <= rightOutput.minimum);
	return output;
}

int main()
{
	Node<int>* root = inputLevelWise();
	BSTParams result = isBSTOptim(root);
	if(result.checkBST)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	delete root;
	return 0;
}