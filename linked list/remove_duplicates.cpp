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

Node* removeDuplicates(Node* head)
{
	if(head==NULL || head->next==NULL)
		return head;
	Node* n1;
	Node* n2;
	n1 = head;
	n2 = head->next;
	while(n2 != NULL)
	{
		if(n1->data == n2->data)
		{
			Node* temp = n2;
			n2 = n2->next;
			delete temp;
		}
		else
		{
			n1->next = n2;
			n1 = n2;
			n2 = n2->next;
		}
	}
	n1->next = n2;
	return head;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = input();
		head = removeDuplicates(head);
		print(head);
	}
	return 0;
}