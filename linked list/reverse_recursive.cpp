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

Node* revRec(Node* head)
{
	Node* smallRes;
	Node* curr;
	if(head == NULL || head->next == NULL)
		return head;
	smallRes = revRec(head->next);
	curr = smallRes;
	while(curr->next != NULL)
		curr = curr->next;
	curr->next = head;
	head->next = NULL;

	return smallRes;
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
	head = revRec(head);
	print(head);
	return 0;
}