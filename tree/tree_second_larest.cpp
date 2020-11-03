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
	TreeNode<int>* largest;
	TreeNode<int>* sLargest;
};

Pair helper(TreeNode<int>* root)
{
	Pair res;
	res.largest = root;
	res.sLargest = NULL;
	for(int i=0; i<root->children.size(); i++)
	{
		Pair tmp;
		tmp = helper(root->children[i]);
		if(res.sLargest==NULL && tmp.sLargest==NULL)
		{
			
			if(res.largest->data > tmp.largest->data)
				res.sLargest = tmp.largest;
		
			else if(res.largest->data == tmp.largest->data)
				res.sLargest = NULL;
			else
			{
				TreeNode<int>* store = res.largest;
				res.largest = tmp.largest;
				res.sLargest = store;
			}
		}

		else if(res.sLargest != NULL && tmp.sLargest == NULL)
		{
			if(res.largest->data > tmp.largest->data)
			{
				if(res.sLargest->data < tmp.largest->data)
					res.sLargest = tmp.largest;
			}
			else if(res.largest->data < tmp.largest->data)
			{
				TreeNode<int>* store = res.largest;
				res.largest = tmp.largest;
				res.sLargest = store;
			}

		}
		else if(res.sLargest == NULL && tmp.sLargest != NULL)
		{
			if(res.largest->data > tmp.largest->data)
				res.sLargest = tmp.largest;
			else if(res.largest->data == tmp.largest->data)
				res.sLargest = tmp.sLargest;
			else
			{
				TreeNode<int>* store;
				store = res.largest;
				res.largest = tmp.largest;
				if(store->data > tmp.sLargest->data)
					res.sLargest = store;
				else
					res.sLargest = tmp.sLargest;
			}
		}

		else if(res.sLargest != NULL && tmp.sLargest != NULL)
		{
			if(res.largest->data > tmp.largest->data)
			{
				if(res.sLargest->data < tmp.largest->data)
					res.sLargest = tmp.largest;
			}
			else if(res.largest->data == tmp.largest->data)
			{
				if(res.sLargest->data < tmp.sLargest->data)
					res.sLargest = tmp.sLargest;
			}
			else
			{
				TreeNode<int>* store;
				store = res.largest;
				res.largest = tmp.largest;
				if(tmp.sLargest->data < store->data)
					res.sLargest = store;
				else
					res.sLargest = tmp.sLargest;
			}
		}
	}
	return res;
}

TreeNode<int>* secondLargest(TreeNode<int>* root)
{
	Pair p = helper(root);
	return p.sLargest;
}

int main()
{
	TreeNode<int>* root = takeInputLevelWise();
	TreeNode<int>* res = secondLargest(root);
	if(res != NULL)
		cout << res->data << endl;
	return 0;
}