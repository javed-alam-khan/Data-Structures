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

void printNoSibling(Node<int>* root)
{
	if(root == NULL)
		return;
	if((root->left != NULL) && (root->right == NULL))
		cout << root->left->data << endl;
	else if((root->left == NULL) && (root->right != NULL))
		cout << root->right->data << endl;
	printNoSibling(root->left);
	printNoSibling(root->right);
}

int main()
{
	int x;
	cout << "Enter binary tree elements" << endl;
	Node<int>* root = inputLevelWise();
	printNoSibling(root);
	delete root;
	return 0;
}