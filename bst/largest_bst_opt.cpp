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

class resultClass
{
	public:
	int min;
	int max;
	bool isBST;
	int height;
};

resultClass helper(Node<int>* root)
{
	resultClass result;
	if(root == NULL)
	{
		result.min = INT_MAX;
		result.max = INT_MIN;
		result.isBST = true;
		result.height = 0;
		return result;
	}
	resultClass l = helper(root->left);
	// cout << "l " << l.min << " " << l.max << " " << l.isBST << " " << l.height << endl;
	resultClass r = helper(root->right);
	// cout << "r " << r.min << " " << r.max << " " << r.isBST << " " << r.height << endl;
	result.min = min(min(l.min, r.min), root->data);
	result.max = max(max(l.max, r.max), root->data);
	if((l.isBST == true) && (r.isBST == true))
	{
		if((l.max < root->data) && (root->data < r.min))
			result.isBST = true;
		else
			result.isBST = false;
	}
	else
		result.isBST = false;
	if(result.isBST)
		result.height = 1 + max(l.height, r.height);
	else
		result.height = max(l.height, r.height);
	// cout << "result " << result.min << " " << result.max << " " << result.isBST << " " << result.height << endl;
	return result;
}

int largestBSTSubtree(Node<int>* root)
{
	return (helper(root).height);
}

int main()
{
	Node<int>* root = inputLevelWise();
	cout << largestBSTSubtree(root) << endl;
	delete root;
	return 0;
}