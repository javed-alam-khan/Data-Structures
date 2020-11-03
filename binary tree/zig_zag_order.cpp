# include <iostream>
# include "binary_tree_node.h"
# include <queue>
# include <stack>
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
void zigZag(Node<int>* root)
{
	if(root == NULL)
		return;
	stack< Node<int>* > stk1;
	stack< Node<int>* > stk2;
	stk1.push(root);
	while(1)
	{
		while(stk1.size() != 0)
		{
			Node<int>* curr = stk1.top();
			stk1.pop();
			cout << curr->data << " ";
			if(curr->left != NULL)
				stk2.push(curr->left);
			if(curr->right != NULL)
				stk2.push(curr->right);
		}
		cout << endl;
		while(stk2.size() != 0)
		{
			Node<int>* curr = stk2.top();
			stk2.pop();
			cout << curr->data << " ";
			if(curr->right != NULL)
				stk1.push(curr->right);
			if(curr->left != NULL)
				stk1.push(curr->left);
		}
		cout << endl;
		if(stk1.empty())
			break;
	}
}

int main()
{
	Node<int>* root = inputLevelWise();
	zigZag(root);
	delete root;
	return 0;
}