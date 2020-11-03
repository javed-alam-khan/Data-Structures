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

void printLevelWise(TreeNode<int>* root)
{
	queue < TreeNode<int>* > q;
	q.push(root);
	while(q.size() != 0)
	{
		TreeNode<int>* front = q.front();
		q.pop();
		cout << front->data << ":";
		for(int i=0; i < front->children.size(); i++)
		{
			q.push(front->children[i]);
			cout << front->children[i]->data;
			if(i != front->children.size()-1)
				cout << ",";
		}
		cout << endl;
	}
}

void helper(TreeNode<int>* root, int depth)
{
	root->data = depth;
	for(int i=0; i<root->children.size(); i++)
		helper(root->children[i], depth+1);
}

void replaceWithDepthValue(TreeNode<int>* root)
{
	if(root == NULL)
		return;
	int depth = 0;
	helper(root, depth);
}


int main()
{
	TreeNode<int>* root = takeInputLevelWise();
	replaceWithDepthValue(root);
	printLevelWise(root);
	return 0;
}