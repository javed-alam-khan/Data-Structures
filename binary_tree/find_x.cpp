# include <iostream>
# include "binary_tree_node.h"
# include <queue>
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

bool find(Node<int>* root, int x)
{
	if(root == NULL)
		return false;
	if(root->data == x)
		return true;
	bool r1 = find(root->left, x);
	bool r2 = find(root->right, x);
	return r1||r2;
}

int main()
{
	int x;
	cout << "Enter binary tree elements" << endl;
	Node<int>* root = inputLevelWise();
	cout << "Enter the element to be found" << endl;
	cin >> x;
	if(find(root, x) == true)
		cout << "Found" << endl;
	else
		cout << "Not found" << endl;
	delete root;
	return 0;
}