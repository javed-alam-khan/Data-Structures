# include <iostream>
# include "binary_tree_node.h"
# include <queue>
# include <vector>
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

vector<int>* findPath(Node<int>* root, int x)
{
	if(root == NULL)
		return NULL;
	if(root->data == x)
	{
		vector<int>* vect = new vector<int>();
		vect->push_back(root->data);
		return vect;
	}
	else
	{
		if(x < root->data)
		{
			vector<int>* lv = findPath(root->left, x);
			if(lv != NULL)
			{
				lv->push_back(root->data);
				return lv;
			}
			else
				return NULL;
		}
		else
		{
			vector<int>* rv = findPath(root->right, x);
			if(rv != NULL)
			{
				rv->push_back(root->data);
				return rv;
			}
			else
				return NULL;
		}
	}
}

int main()
{
	int x;
	Node<int>* root = inputLevelWise();
	cout << "Enter x" << endl;
	cin >> x;
	vector<int>* result = findPath(root, x);
	if(result == NULL)
		cout << "empty vector";
	else
	{
		for(int i = 0; i < result->size(); i++)
		{
			cout << result->at(i) << " ";
		}	
	}
	cout << endl;
	delete root;
	delete result;
	return 0;
}