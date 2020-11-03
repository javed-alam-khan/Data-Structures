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

class Pair
{
	public:
	Node* head;
	Node* tail;
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

Pair helper(Node* head)
{
	if(head == NULL || head->next == NULL)
	{
		Pair ans;
		ans.head = head;
		ans.tail = head;
		return ans;
	}
	Pair smallRes;
	smallRes = helper(head->next);
	smallRes.tail->next = head;
	head->next = NULL;
	smallRes.tail = smallRes.tail->next;
	return smallRes;
}

Node* reverse(Node* head)
{
	return helper(head).head;
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
	head = reverse(head);
	print(head);
	return 0;
}