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
	cin >> data;
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

		cin >> data;
	}
	return head;
}

Node* reverseIterative(Node* head)
{
	Node* prev = NULL;
	Node* curr = head;
	Node* after = head->next;
	while(after != NULL)
	{
		curr->next = prev;
		prev = curr;
		curr = after;
		after = after->next;
	}
	curr->next = prev;
	head = curr;
	return head;
}

void print(Node* head)
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
}

int main()
{
	Node* head = input();
	// print(head);
	head = reverseIterative(head);
	print(head);
	return 0;
}