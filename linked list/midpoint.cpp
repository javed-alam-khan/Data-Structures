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
	cin >> data;
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
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}

node* midpoint(node* head)
{
	if(head == NULL)
		return head;
	node* slow = head;
	node* fast = head->next;
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;	
		fast = fast->next->next;
	}
	
	return slow;
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

int main()
{
	node* head = input();
	node* mid = midpoint(head);
	if(mid != NULL)
		cout<<mid->data<<endl;
	return 0;
}