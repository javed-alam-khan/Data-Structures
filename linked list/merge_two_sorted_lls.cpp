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

Node* mergeTwoLLs(Node* head1, Node* head2)
{
	Node* fHead = NULL;
	Node* fTail = NULL;
	while(head1 != NULL && head2 != NULL)
	{
		if(head1->data <= head2->data)
		{
			if(fHead == NULL)
			{
				fHead = head1;
				fTail = head1;
				head1 = head1->next;
			}
			else
			{
				fTail->next = head1;
				fTail = fTail->next;
				head1 = head1->next;
			}
		}
		else
		{
			if(fHead == NULL)
			{
				fHead = head2;
				fTail = head2;
				head2 = head2->next;
			}
			else
			{
				fTail->next = head2;
				fTail = fTail->next;
				head2 = head2->next;
			}
		}
	}
	if(head1 != NULL)
		fTail->next = head1;
	else
		fTail->next = head2;
	
	return fHead;	
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
	Node* head1 = input();
	Node* head2 = input();
	Node* head3 = mergeTwoLLs(head1, head2);
	print(head3);
	return 0;
}