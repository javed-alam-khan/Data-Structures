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

Node<int>* buildTreeHelper(int* pre, int* in, int preS, int preE, int inS, int inE)
{
	if(inS > inE)
		return NULL;
	int rootData = pre[preS];
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
	int lPreS = preS + 1; 
	int lInS = inS;
	int lInE = rootIndex - 1;
	int lPreE = lInE - lInS + lPreS;
	int rPreS = lPreE + 1;
	int rPreE = preE;
	int rInS = rootIndex + 1;
	int rInE = inE;
	root->left = buildTreeHelper(pre, in, lPreS, lPreE, lInS, lInE);
	root->right = buildTreeHelper(pre, in, rPreS, rPreE, rInS, rInE);
	return root;
}

Node<int>* buildTree(int* pre, int preSize, int* in, int inSize)
{
	int preS = 0;
	int preE = preSize - 1;
	int inS = 0;
	int inE = inSize - 1;
	return buildTreeHelper(pre, in, preS, preE, inS, inE);
}

int main()
{
	int size;
	cin >> size;
	int* pre = new int[size];
	for(int i=0; i<size; i++)
		cin >> pre[i];
	int* in = new int[size];
	for(int i=0; i<size; i++)
		cin >> in[i];
	Node<int>* root = buildTree(pre, size, in, size);
	printLevels(root);
	return 0;
}
