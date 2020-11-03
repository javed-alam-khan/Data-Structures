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

int indexOfNRecursive(Node* head, int n)
{
	int smallRes;
	if(head == NULL)
		return -1;
	if(head->data == n)
		return 0;
	smallRes = indexOfNRecursive(head->next, n);
	if(smallRes == -1)
		return smallRes;
	else
		return 1+smallRes;

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
	int n;
	Node* head = input();
	cin >> n;
	cout<<indexOfNRecursive(head, n)<<endl;
	return 0;
}