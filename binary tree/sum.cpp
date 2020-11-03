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

int sumOfAllNodes(Node<int>* root)
{
	if(root == NULL)
		return 0;
	int sum = root->data;
	sum += sumOfAllNodes(root->left);
	sum += sumOfAllNodes(root->right);
	return sum;
}


int main()
{
	int x;
	cout << "Enter binary tree elements" << endl;
	Node<int>* root = inputLevelWise();
	cout << sumOfAllNodes(root) << endl;
	delete root;
	return 0;
}