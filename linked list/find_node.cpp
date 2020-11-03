#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

Node* input()
{
	int data;
	cin>>data;
	Node* head = NULL;
	Node* tail = NULL;
	while(data != -1)
	{
		Node* newNode = new Node(data);
		if(head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = tail->next;
		}
		cin>>data;
	}
	return head;
}

void print(Node* head)
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int findNode(Node* head, int val)
{
	int lc = 0;
	Node* curr = head;
	while(curr != NULL)
	{
		if(curr->data == val)
			return lc;
		curr = curr->next;
		lc++;
	}
	return -1;
}

int main()
{
	int t;
	int val;
	Node* head;
	cin >> t;
	while(t--)
	{
		head = input();
		cin >> val; 
		cout<<findNode(head, val)<<endl;
	}

	return 0;
}