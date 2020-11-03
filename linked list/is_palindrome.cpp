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

node* reverseIterative(node* head)
{
	node* prev = NULL;
	node* curr = head;
	node* after = head->next;
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

void print(node* head)
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

bool isPalindrome(node* head)
{
	if(head == NULL)
		return true;
	node* mid = midpoint(head);
	// cout<<mid->data<<endl;
	node* newHead = mid->next;
	mid->next = NULL;
	// print(head);
	// print(newHead);
	newHead = reverseIterative(newHead);
	// print(newHead);
	while(newHead != NULL)
	{
		if(head->data != newHead->data)
			return false;
		head = head->next;
		newHead = newHead->next;
	}
	return true;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		bool res;
		node* head = input();
		res = isPalindrome(head);
		cout<<res<<endl;
	}
	return 0;
}