# include <iostream>
# include "binary_tree_node.h"
# include <queue>
# include <climits>
using namespace std;

Node<int>* inputLevelWise()
{
	int rootData;
	cin >> rootData;
	if(rootData == -1)
		return NULL;
	Node<int>* root = new Node<int>(rootData);
	queue< Node<int>* > q;
	q.push(root);
	while(q.empty() != true)
	{
		int childData;
		Node<int>* front = q.front();
		q.pop();
		Node<int>* child;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->left = child;
		}

		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->right = child;
		}
	}
	return root;
}

void printLevelWise(Node<int>* root)
{
	if(root == NULL)
		return;
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

Node<int>* removeLeafNodes(Node<int>* root)
{
	if(root == NULL)
		return root;
	if(root->left == NULL && root->right == NULL)
	{
		return NULL;
	}
	Node<int>* leftRoot = removeLeafNodes(root->left);
	Node<int>* rightRoot = removeLeafNodes(root->right);
	root->left = leftRoot;
	root->right = rightRoot;
	return root;
}


int main()
{
	int x;
	cout << "Enter binary tree elements" << endl;
	Node<int>* root = inputLevelWise();
	root = removeLeafNodes(root);
	printLevelWise(root);
	delete root;
	return 0;
}