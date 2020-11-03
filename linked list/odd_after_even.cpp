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

node* arrange_LinkedList(node* head)
{
	node* oddH = NULL;
	node* oddT = NULL;
	node* evenH = NULL;
	node* evenT = NULL;
	while(head != NULL)
	{
		if(head->data % 2 != 0)
		{
			if(oddH == NULL)
			{
				oddH = head;
				oddT = head;
				head = head->next;
			}
			else
			{
				oddT->next = head;
				oddT = oddT->next;
				head = head->next;
			}
		}
		else
		{
			if(evenH == NULL)
			{
				evenH = head;
				evenT = head;
				head = head->next;
			}
			else
			{
				evenT->next = head;
				evenT = evenT->next;
				head = head->next;
			}
		}
	}
	if(evenH == NULL)
		oddT->next = NULL;
	else if(oddH == NULL)
	{
		evenT->next = NULL;
		oddH = evenH;
	}
	else
	{
		evenT->next = NULL;
		oddT->next = evenH;
	}

	return oddH;
}

void print(node* head)
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
	int n;
	node* head = input();
	head = arrange_LinkedList(head);
	print(head);
	return 0;
}