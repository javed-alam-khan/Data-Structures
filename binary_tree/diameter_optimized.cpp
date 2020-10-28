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

pair<int, int> heightDiamet(Node<int>* root)
{
	pair<int, int> p;
	if(root == NULL)
	{
		p.first = 0;
		p.second = 0;
		return p;
	}
	pair<int, int> leftRes = heightDiamet(root->left);
	pair<int, int> rightRes = heightDiamet(root->right);
	int lh = leftRes.first;
	int ld = leftRes.second;
	int rh = rightRes.first;
	int rd = rightRes.second;
	p.first = 1 + max(lh, rh);
	p.second = max(max((lh+rh), ld),rd);
	return p;
}

int main()
{
	Node<int>* root = inputLevelWise();
	pair<int, int> p = heightDiamet(root);
	cout << "height " << p.first << endl;
	cout << "diameter " << p.second << endl; 
	delete root;
	return 0;
}