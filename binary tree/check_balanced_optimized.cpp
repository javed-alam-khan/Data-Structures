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


pair<int, bool> isBalanced(Node<int>* root)
{
	pair<int, bool> p;
	if(root == NULL)
	{
		p.first = 0;
		p.second = true;
		return p;
	}
	pair<int, bool> lp = isBalanced(root->left);
	pair<int, bool> rp = isBalanced(root->right);
	p.first = 1 + max(lp.first, rp.first);
	if(lp.second && rp.second)
	{
		if(abs(lp.first - rp.first) <= 1)
			p.second = true;
		else
			p.second = false;
	}
	else
		p.second = false;
	return p;
}


int main()
{
	Node<int>* root = inputLevelWise();
	pair<int, bool> p = isBalanced(root);
	cout << "height " << p.first << endl;
	if(p.second)
		cout << "Balanced\n";
	else
		cout <<"Not balanced\n";
	delete root;
	return 0;
}