#include <iostream>
#include <vector>
using namespace std;
#include "tree_node_class.h"

void print(TreeNode<int>* root)
{
	if(root == NULL)
		return;
	cout << root->data << ":";
	for(int i = 0; i < root->children.size(); i++)
	{
		cout << root->children[i]->data;
		if(i != root->children.size()-1)
			cout << ",";
	}
	cout << endl;

	for(int i = 0; i < root->children.size(); i++)
	{
		print(root->children[i]);
	}
}

TreeNode<int>* takeInput()
{
	int data;
	int countCh;
	cout << "Enter data" << endl;
	cin >> data;
	TreeNode<int>* root = new TreeNode<int> (data);
	cout << "Enter current node children" << endl;	
	cin >> countCh;
	for(int i=0; i<countCh; i++)
	{
		TreeNode<int>* child = takeInput();
		root->children.push_back(child);
	}
	return root;
}

int main()
{
	// TreeNode<int>* root = new TreeNode<int>(10);
	// TreeNode<int>* node1 = new TreeNode<int>(20);
	// TreeNode<int>* node2 = new TreeNode<int>(30);
	// root->children.push_back(node1);
	// root->children.push_back(node2);
	TreeNode<int>* root = takeInput();
	print(root);
	return 0;
}