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

int length(Node* head)
{
	int l = 0;
	while(head != NULL)
	{
		l++;
		head = head->next;
	}
	return l;
}

Node* appendLastNToFirst(Node* head, int n)
{
	int l;
	int i;
	if(head == NULL)
		return head;
	Node* curr = head;
	Node* newHead;
	Node* newCurr;
	l = length(head);
	if(n%l == 0)
		return head;
	if(n > l)
		n = n % l;
	// cout<<"l "<<l<<endl;
	i = 1;
	while(i < l-n)
	{
		curr = curr->next;
		i++;
	}

	// cout<<"curr->data "<<curr->data<<endl;
	newHead = curr->next;
	curr->next = NULL;

	newCurr = newHead;
	while(newCurr->next != NULL)
	{
		newCurr = newCurr->next;
	}
	newCurr->next = head;
	return newHead;
}

int main()
{
	int t;
	int n;
	cin >> t;
	while (t--)
	{
		Node *head = input();
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
		// cout<<length(head)<<endl;
	}
	return 0;
}