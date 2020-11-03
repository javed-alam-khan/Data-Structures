# include <iostream>
# include "binary_tree_node.h"
# include <queue>
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

template<typename T>
class ListNode
{
	public:
	T data;
	ListNode *next;
	ListNode(T data)
	{
		this->data = data;
		next = NULL;		
	}
};

class ReturnClass
{
	public:
	ListNode<int>* head;
	ListNode<int>* tail;
};

ReturnClass BSTToList(Node<int> *root)
{
	ReturnClass output;
	if(root == NULL)
	{
		output.head = NULL;
		output.tail = NULL;
		return output;
	}
	int rootData = root->data;
	ListNode<int>* head = new ListNode<int>(rootData);
	ReturnClass l = BSTToList(root->left);
	ReturnClass r = BSTToList(root->right);
	if(l.tail != NULL)
	{
		(l.tail)->next = head;
	}
	head->next = r.head;
	if(l.head != NULL)
	{
		output.head = l.head;
	}
	else
	{
		output.head = head;
	}
	if(r.tail != NULL)
	{
		output.tail = r.tail;
	}
	else
	{
		output.tail = head;	
	}
	return output;
}

int main()
{
	Node<int>* root = inputLevelWise();
	ReturnClass result = BSTToList(root);
	ListNode<int>* head = result.head;
	if(head == NULL)
		cout << "empty list" << endl;
	while(head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
	return 0;
}