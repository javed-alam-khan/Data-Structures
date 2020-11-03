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

void printIthNode(node *head, int i)
{
	node* curr = head;
	int lc = 0;
	while(lc<i && curr != NULL)
	{
		curr = curr->next;
		lc++;
	}
	if(curr != NULL)
		cout<<curr->data<<endl;
}

node* insertIthNode(node *head, int pos, int data)
{
	node* newNode = new node(data);
	if(pos == 0)
	{
		newNode->next = head;
		head = newNode;
		return head;
	}
	int lc = 0;
	node* temp;
	node* curr = head;
	while(lc < pos-1 && curr != NULL)
	{
		curr = curr->next;
		lc++;
	}
	if(curr != NULL)
	{
		temp = curr->next;
		curr->next = newNode;
		newNode->next = temp;
	}
	return head;
}

node* deleteNode(node* head, int pos)
{
	int lc = 0;
	node* curr = head;

	if(pos < 0)
		return head;

	if(pos==0)
	{
		head = head->next;
		delete curr;
		return head;
	}

	while(lc < pos-1 && curr != NULL)
	{
		curr = curr->next;
		lc++;
	}
	// cout<<"curr->data "<<curr->data<<endl;

	if(curr != NULL)
	{
		if(curr->next == NULL)
		{
			return head;
		}
		else
		{
			node* a = curr->next;
			curr->next = a->next;
			delete a;
		}
	}

	return head;
}

int main()
{
	node* head = input();
	print(head);
	int pos;
	// int data;
	// int i;
	// cin>>i;
	// printIthNode(head, i);
	cin >> pos;
	// cin >> data;
	// head = insertIthNode(head, pos, data);
	head = deleteNode(head, pos);
	print(head);
	return 0;
}