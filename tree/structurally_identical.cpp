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

bool isIdentical(TreeNode<int>* root1, TreeNode<int>* root2)
{
	if(root1->data != root2->data)
		return false;
	if(root1->children.size() != root2->children.size())
		return false;
	bool res = true;
	for(int i=0; i<root1->children.size(); i++)
	{
		res = isIdentical(root1->children[i], root2->children[i]);
		if(res == false)
			break;
	}
	return res;
}

int main()
{
	TreeNode<int>* root1 = takeInputLevelWise();
	TreeNode<int>* root2 = takeInputLevelWise();
	if(isIdentical(root1, root2))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}