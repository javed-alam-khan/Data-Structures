#include<iostream>
#include<cstdlib>
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

node* swap_nodes(node* head, int i, int j)
{
	cout<<"inside swap nodes\n";
	int temp1;
	int temp2;
	// cout<<"1"<<endl;
	node* prev1 = head;
	node* prev2 = head;
	node* curr1 = head;
	node* curr2 = head;
	temp1 = min(i,j)-1;
	cout<<"temp1 "<<temp1<<endl;
	temp2 = max(i,j)-1;
	cout<<"temp2 "<<temp2<<endl;
	// cout<<"2"<<endl;
	if(temp1 > 0)
	{
		while(temp1)
		{
			cout<<temp1<<endl;
			cout<<"inside 1st while\n";
			prev1 = prev1->next;
			temp1--;
		}
	}
	if(temp1 >= 0)
		curr1 = prev1->next;
	// cout<<"3"<<endl;
	while(temp2)
	{
		cout<<"inside 2nd while\n";
		prev2 = prev2->next;
		temp2--;
	}
	curr2 = prev2->next;

	if(i==0||j==0)
	{
		cout<<"inside one is head\n";
		if(abs(i-j) == 1)
		{
			cout<<"inside adjacent\n";
			curr1->next = curr2->next;
			curr2->next = curr1;
			head = curr2;
			return head;
		}
		else
		{
			cout<<"inside not adjacent\n";
			cout<<curr1->data<<endl;
			cout<<prev2->data<<endl;
			cout<<curr2->data<<endl;
			node* store;
			prev2->next = curr1;
			store = curr1->next;
			curr1->next = curr2->next;
			curr2->next = store;
			head = curr2;
			return head;
		}
	}
	else
	{
		cout<<"inside no one is head\n";
		if(abs(i-j) == 1)
		{
			cout<<"inside adjacent\n";
			cout<<prev1->data<<endl;
			cout<<curr1->data<<endl;
			cout<<curr2->data<<endl;
			prev1->next = curr2;
			curr1->next = curr2->next;
			curr2->next = curr1;
			return head;
		}
		else
		{
			cout<<"inside not adjacent\n";
			node* store;
			prev1->next = curr2;
			prev2->next = curr1;
			store = curr1->next;
			curr1->next = curr2->next;
			curr2->next = store;
			return head;
		}
	}
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



int main()
{
	int i;
	int j;
	node* head = input();
	cin >> i;
	cin >> j;
	head = swap_nodes(head,i,j);
	print(head);
	return 0;
}