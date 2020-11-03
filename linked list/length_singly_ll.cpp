#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
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
int length(node *head)
{
	int c = 0;
	node* temp = head;
	while(temp != NULL)
	{
		c++;
		temp = temp->next;
	}
	return c;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		node* head = input();
		cout<<length(head)<<endl;
	}
	return 0;
}