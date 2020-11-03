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

int llSize(node* head)
{
	int l = 0;
	while(head != NULL)
	{
		l++;
		head = head->next;
	}
	return l;
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

node* bubble_sort_LinkedList_itr(node* head)
{
	int l = llSize(head);
	cout << "l " << l << endl;
	for(int i=0; i<l-1; i++)
	{
		node* curr = head;
		while(curr->next != NULL)
		{
			cout<<"curr->data"<<" "<<curr->data<<endl;
			cout<<"curr->next->data"<<" "<<curr->next->data<<endl;
			if(curr->data > curr->next->data)
			{
				cout << "entered curr->data > curr->next->data" << endl;
				if(curr == head)
				{
					cout<<"curr is head\n";
					node* store;
					store = curr->next;
					curr->next = curr->next->next;
					store->next = curr;
					head = store;
					curr = head->next;
					print(head);
				}
				else
				{
					cout<<"curr is not head\n";
					node* prev = head;
					while(prev->next != curr)
						prev = prev->next;
					prev->next = curr->next;
					curr->next = curr->next->next;
					prev->next->next = curr;
					print(head);
				}
			}
			else
			{
				cout << "not entered\n";
				curr = curr->next;
				cout<<"curr->data"<<" "<<curr->data<<endl;
			}
		}
	}
	return head;
}

int main()
{
	node* head = input();
	head = bubble_sort_LinkedList_itr(head);
	print(head);
	return 0;
}