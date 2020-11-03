#include<iostream>
using namespace std;

class node
{
	public:
	int data;
	node* next;

	node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

node* input()
{
	int data;
	cin>>data;
	node* head = NULL;
	node* tail = NULL;
	while(data != -1)
	{
		node* newNode = new node(data);
		if(head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin>>data;
	}
	return head;
}

void print(node* head)
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

int length(node* head)
{
	if(head == NULL)
		return 0;
	return 1+length(head->next);
}

int main()
{
	node* head = input();
	print(head);
	cout<<length(head)<<endl;
	return 0;
}