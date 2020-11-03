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

class PairAns
{
	public:
	int max;
	int min;
};

PairAns minMax(Node<int>* root)
{
	PairAns obj;
	PairAns child;
	obj.max = INT_MIN;
	obj.min = INT_MAX;
	if(root == NULL)
		return obj;
	if(root->data > obj.max)
		obj.max = root->data;
	if(root->data < obj.min)
		obj.min = root->data;
	child = minMax(root->left);
	obj.max = max(obj.max, child.max);
	obj.min = min(obj.min, child.min);
	child = minMax(root->right);
	obj.max = max(obj.max, child.max);
	obj.min = min(obj.min, child.min);
	return obj;
}

int main()
{
	int x;
	cout << "Enter binary tree elements" << endl;
	Node<int>* root = inputLevelWise();
	PairAns res = minMax(root);
	cout << "maximum element " << res.max << endl;
	cout << "minimum element " << res.min << endl;
	delete root;
	return 0;
}