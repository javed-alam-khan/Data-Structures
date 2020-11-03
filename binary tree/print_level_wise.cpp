# include <iostream>
# include "binary_tree_node.h"
# include <queue>
using namespace std;
Node<int>* inputLevelWise()
{
	// Root input
	int rootData;
	// cout << "Enter root data" << endl;
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
void printLevelWise(Node<int>* root)
{
	queue<Node<int>*> q;
	q.push(root);
	while(q.size() != 0)
	{
		Node<int>* front = q.front();
		q.pop();
		cout << front->data <<":";
		// Left child print
		if(front->left != NULL)
		{
			cout << "L:" << front->left->data << ",";
			q.push(front->left);
		}
		else
			cout << "L:-1,";
		// Right child print
		if(front->right != NULL)
		{
			cout << "R:" << front->right->data;
			q.push(front->right);
		}
		else
			cout << "R:-1";
		cout << endl;
	}
}

int main()
{
	cout << "Enter the elements" << endl;
	Node<int>* root = inputLevelWise();
	printLevelWise(root);
	delete root;
	return 0;
}