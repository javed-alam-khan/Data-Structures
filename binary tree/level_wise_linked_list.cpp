# include <iostream>
# include "updated_binary_tree_node.h"
# include <queue>
# include <stack>
# include <vector>
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
		cout << "Enter left child data of Node " << front->data  << endl;
		cin >> childData;
		if(childData != -1)
		{
			child = new Node<int>(childData);
			q.push(child);
			front->left = child;
		}
		
		// Right child input
		cout << "Enter right child data of Node " << front->data  << endl;
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

vector<node<int>*> createLLForEachLevel(Node<int>* root)
{
	vector<node<int>*> vect;
	if(root == NULL)
		return vect;
	queue<Node<int>*> q;
	q.push(root);
	q.push(NULL);
	node<int>* head = NULL;
	node<int>* tail = NULL;
	while(q.size() != 0)
	{
		Node<int>* curr = q.front();
		q.pop();
		if(curr != NULL)
		{
			if(head == NULL)
			{
				head = new node<int>(curr->data);
				tail = head;
				if(curr->left != NULL)
					q.push(curr->left);
				if(curr->right != NULL)
					q.push(curr->right);
			}
			else
			{
				tail->next = new node<int>(curr->data);
				tail = tail->next;
				if(curr->left != NULL)
					q.push(curr->left);
				if(curr->right != NULL)
					q.push(curr->right);
			}
		}
		else
		{
			if(q.size() != 0)
				q.push(NULL);
			vect.push_back(head);
			head = NULL;
			tail = NULL;
		}
	}
	return vect;
}

void printLinkedList(node<int>* head)
{
	while(head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

int main()
{
	Node<int>* root = inputLevelWise();
	vector<node<int>*> res = createLLForEachLevel(root);
	// cout << res.size() << endl;
	for(int i=0; i<res.size(); i++)
	{
		node<int>* tmp = res[i];
		printLinkedList(tmp);
	}
	delete root;
	return 0;
}