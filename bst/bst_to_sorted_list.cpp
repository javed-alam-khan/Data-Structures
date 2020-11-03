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

ListNode<int>* BSTToList(Node<int>* root)
{
	if(root == NULL)
		return NULL;
	int rootData = root->data;
	ListNode<int>* head = new ListNode<int>(rootData);
	ListNode<int>* l = BSTToList(root->left);
	ListNode<int>* r = BSTToList(root->right);
	head->next = r;
	if(l != NULL)
	{
		ListNode<int>* store = head;
		head = l;
		ListNode<int>* traverse = l;
		while(traverse->next != NULL)
		{
			traverse = traverse->next;
		}
		traverse->next = store;
	}
	return head;
}


int main()
{
	Node<int>* root = inputLevelWise();
	ListNode<int>* head = BSTToList(root);
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