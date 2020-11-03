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

void print(node* head)
{
	while(head != NULL)
	{
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

void removeData(node* clean, int n)
{
	// cout<<"inside removeData"<<endl;
	// cout<<"clean->data "<<clean->data<<endl;
	// cout<<"n "<<n<<endl;
	int lc = 0;
	node* cleanHelper;
	while(lc<n)
	{
		print(clean);
		cleanHelper = clean->next;
		delete clean;
		clean = cleanHelper;
		lc++;
	}
	print(clean);
}

node* skipMdeleteN(node* head,int m,int n)
{
	node* curr = head;
	while(curr != NULL)
	{
		int c1 = 1;
		int c2 = 1;
		node* temp1;
		node* temp2;
		temp1 = curr;
		while(c1 < m)
		{
			temp1 = temp1->next;
			if(temp1 == NULL)
				return head;
			c1++;
		}
		cout<<"temp1->data "<<temp1->data<<endl;
		temp2 = temp1;
		while(c2 <= n+1)
		{
			temp2 = temp2->next;
			if(temp2 == NULL)
			{
				removeData(temp1->next,c2-1);
				temp1->next = NULL;
				return head; 
			}
			c2++;
		}
		cout<<"temp2->data "<<temp2->data<<endl;
		cout<<"temp1->next->data "<<temp1->next->data<<endl;
		removeData(temp1->next,n);
		temp1->next = temp2;
		cout<<"temp1->next->data "<<temp1->next->data<<endl;
		curr = temp2;
	}
	return head;
}

int main()
{
	int m;
	int n;
	node* head = input();
	cin >> m;
	cin >> n;
	head = skipMdeleteN(head,m,n);
	print(head);
	return 0;
}