#include <iostream>
#include "binary_tree_node.h"
#include <queue>
using namespace std;

void printLevels(Node<int>* root)
{
	if(root == NULL)
		return;
	queue<Node<int>*> q;
	q.push(root);
	q.push(NULL);
	while(q.size() != 0)
	{
		Node<int>* curr = q.front();
		q.pop();
		if(curr != NULL)
			cout << curr->data << " ";
		else
		{
			if(q.size() != 0)
			{
				q.push(NULL);
				cout << endl;
				continue;
			}
			else
			{
				cout << endl;
				break;
			}
		}
		if(curr->left != NULL)
			q.push(curr->left);
		if(curr->right != NULL)
			q.push(curr->right);
	}
}

Node<int>* buildTreeHelper(int* post, int* in, int postS, int postE, int inS, int inE)
{
	if(inS > inE)
		return NULL;
	int rootData = post[postE];
	int rootIndex = -1;
	for(int i = inS; i <= inE; i++)
	{
		if(in[i] == rootData)
		{
			rootIndex = i;
			break;
		}
	}
	Node<int>* root = new Node<int>(rootData);
	 
	int lInS = inS;
	int lInE = rootIndex - 1;
	int rInS = rootIndex + 1;
	int rInE = inE;
	int lPostS = postS;
	int rPostE = postE - 1;
	int rPostS = rPostE - rInE + rInS;
	int lPostE = rPostS - 1;
	
	root->left = buildTreeHelper(post, in, lPostS, lPostE, lInS, lInE);
	root->right = buildTreeHelper(post, in, rPostS, rPostE, rInS, rInE);
	return root;
}

Node<int>* buildTree(int* post, int postSize, int* in, int inSize)
{
	int postS = 0;
	int postE = postSize - 1;
	int inS = 0;
	int inE = inSize - 1;
	return buildTreeHelper(post, in, postS, postE, inS, inE);
}

int main()
{
	int size;
	cin >> size;
	int* post = new int[size];
	for(int i=0; i<size; i++)
		cin >> post[i];
	int* in = new int[size];
	for(int i=0; i<size; i++)
		cin >> in[i];
	Node<int>* root = buildTree(post, size, in, size);
	printLevels(root);
	return 0;
}
