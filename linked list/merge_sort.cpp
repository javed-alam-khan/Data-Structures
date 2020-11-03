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

Node* midpoint(Node* head)
{
	// cout<<"7"<<endl;
	if(head == NULL)
		return head;
	Node* slow = head;
	Node* fast = head->next;
	while(fast != NULL && fast->next != NULL)
	{
		slow = slow->next;	
		fast = fast->next->next;
	}
	return slow;
	// cout<<"8"<<endl;
}

Node* mergeTwoLLs(Node* head1, Node* head2)
{
	// cout<<"5"<<endl;
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
	// cout<<"6"<<endl;	
}	

Node* mergeSort(Node* head)
{
	// cout<<"1"<<endl;
	if(head == NULL || head->next == NULL)
		return head;
	Node* mid = midpoint(head);
	Node* newHead = mid->next;
	mid->next = NULL;
	head = mergeSort(head);
	newHead = mergeSort(newHead);
	head = mergeTwoLLs(head, newHead);
	return head;
	// cout<<"2"<<endl;
}

void print(Node* head)
{
	// cout<<"3"<<endl;
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<"\n";
	// cout<<"4"<<endl;
}

int main()
{
	Node* head = input();
	head = mergeSort(head);
	print(head);
	return 0;
}