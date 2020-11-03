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

TreeNode<int>* maxDataNode(TreeNode<int>* root)
{
	TreeNode<int>* max = root;
	for(int i=0; i<root->children.size(); i++)
	{
		TreeNode<int>* tmp = maxDataNode(root->children[i]);
		if(tmp->data > max->data)
			max = tmp;
	}
	return max;
}

int main()
{
	TreeNode<int>* root = takeInputLevelWise();
	cout << maxDataNode(root)->data << endl;
}