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

node* deleteNodeRec(node *head, int pos)
{
	node* temp;
	if(head == NULL)
		return head;

	if(pos == 0)
	{
		node* curr = head;
		head = head->next;
		delete curr;
		return head;
	}

	temp = deleteNodeRec(head->next, pos-1);
	head->next = temp;
	return head;
}

int main()
{
	int pos;
	node* head = input();
	print(head);
    cin >> pos;
    head = deleteNodeRec(head, pos);
    print(head);
	return 0;
}