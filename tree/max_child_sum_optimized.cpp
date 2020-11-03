#include <iostream>
#include <queue>
#include "tree_node_class.h"
using namespace std;

TreeNode<int>* takeInputLevelWise()
{
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	// dynamically allocating root node
	TreeNode<int>* root = new TreeNode<int> (rootData);
	queue < TreeNode<int>* > q;
	q.push(root);
	// loop until queue is empty
	while(q.size() != 0)
	{
		TreeNode<int>* front = q.front();
		q.pop();
		int countCh;
		cout << "Enter no. of children of " << front->data << endl;
		cin >> countCh;
		for(int i=0; i<countCh; i++)
		{
			int childData;
			if(i==0)
			cout << "Enter"<<" "<< i+1 <<"st"<<" "<<"child data of " << front->data << endl;
			else if(i==1)
			cout << "Enter"<<" "<< i+1 <<"nd"<<" "<<"child data of " << front->data << endl;
			if(i==2)
			cout << "Enter"<<" "<< i+1 <<"rd"<<" "<<"child data of " << front->data << endl;
			if(i==3)
			cout << "Enter"<<" "<< i+1 <<"th"<<" "<<"child data of " << front->data << endl;
			cin >> childData;
			TreeNode<int>* child = new TreeNode<int> (childData);
			front->children.push_back(child);
			q.push(child);
		}
	}

	return root;
}

class Pair
{
	public:
	TreeNode<int>* res;
	int resSum;
};

Pair helper(TreeNode<int>* root)
{
	Pair p;
	p.res = root;
	p.resSum = root->data;

	for(int i=0; i<root->children.size(); i++)
		p.resSum += root->children[i]->data;
	for(int i=0; i<root->children.size(); i++)
	{
		Pair tmp;
		tmp = helper(root->children[i]);

		if(tmp.resSum > p.resSum)
		{
			p.resSum = tmp.resSum;
			p.res = tmp.res;
		}
	}
	return p;
}

TreeNode<int>* maxSumNode(TreeNode<int>* root)
{
	if(root == NULL)
		return NULL;
	Pair p = helper(root);
	return p.res;
}

int main()
{
	TreeNode<int>* root = takeInputLevelWise();
	cout << maxSumNode(root)->data << endl;
}