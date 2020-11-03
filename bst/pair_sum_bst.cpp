# include<iostream>
# include"binary_tree_node.h"
# include<queue>
#include<stack>
using namespace std;

Node<int>* inputLevelWise()
{
	// Root input
	int rootData;
	cout << "Enter root data" << endl;
	cin >> rootData;
	if(rootData == -1)
		return NULL;
	Node<int>* root = new Node<int>(rootData);

	// A queue for storing node addresses
	queue< Node<int>* > q;
	q.push(root);
	while(q.empty() != true)
	{
		int childData;
		Node<int>* front = q.front();
		q.pop();
		Node<int>* child;

		// Left child input
		// cout << "Enter left child data of Node " << front->data  << endl;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->left = child;
		}
		
		// Right child input
		// cout << "Enter right child data of Node " << front->data  << endl;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->right = child;
		}
	}
	// Returning root of built binary tree
	return root;
}

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

void printStack(stack<Node<int>*> stak)
{
	while(!stak.empty())
	{
		cout << stak.top()->data << endl;
		stak.pop();
	}
}

int BSTSize(Node<int>* root)
{
	if(root == NULL)
		return 0;
	int lSize = BSTSize(root->left);
	int rSize = BSTSize(root->right);
	return 1 + lSize + rSize;
}


void printNodesSumToS(Node<int>* root, int s) 
{
	int size = BSTSize(root);
	if(size==0 || size==1)
		return;
	stack<Node<int>*> inorder;
	stack<Node<int>*> revInorder;
	Node<int>* tmp = root;
	while(tmp)
	{
		inorder.push(tmp);
		tmp = tmp->left;
	}
	// printStack(inorder);
	// cout << endl;
	tmp = root;
	while(tmp)
	{
		revInorder.push(tmp);
		tmp = tmp->right;
	}
	// printStack(revInorder);
	
	int c = size;
	while(1)
	{
		Node<int>* tmp1;
		Node<int>* tmp2;
		Node<int>* top1 = inorder.top();
		Node<int>* top2 = revInorder.top();
		if(top1->data + top2->data == s)
		{
			cout << top1->data << " " << top2->data << endl;
			tmp1 = top1->right;
			tmp2 = top2->left;
			cout << min(top1->data, top2->data) << " " << max(top1->data, top2->data) << endl;
			inorder.pop();
			c --;
			cout << c << endl;
			if(c==1)
				break;
			revInorder.pop();
			c --;
			cout << c << endl;
			if(c == 1)
				break;
			while(tmp1)
			{
				inorder.push(tmp1);
				tmp1 = tmp1->left;
			}
			while(tmp2)
			{
				revInorder.push(tmp2);
				tmp2 = tmp2->right;
			}
		}
		else if(top1->data + top2->data < s)
		{
			cout << top1->data << " " << top2->data << endl;
			tmp1 = top1->right;
			inorder.pop();
			c--;
			cout << c << endl;
			if(c == 1)
				break;
			while(tmp1)
			{
				inorder.push(tmp1);
				tmp1 = tmp1->left;
			}
		}
		else
		{
			cout << top1->data << " " << top2->data << endl;
			tmp2 = top2->left;
			revInorder.pop();
			c--;
			cout << c << endl;
			if(c == 1)
				break;
			while(tmp2)
			{
				revInorder.push(tmp2);
				tmp2 = tmp2->right;
			}
		}
	}
}

int main()
{
	Node<int>* root = inputLevelWise();
	int s;
	cin >> s;
	printNodesSumToS(root, s);
	// printLevels(root);
	// cout << "size " << BSTSize(root) << endl;
	delete root;
	return 0;
}
// input : 7 5 10 3 -1 -1 -1 -1 -1