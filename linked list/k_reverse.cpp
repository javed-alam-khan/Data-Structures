#include <iostream>
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
	node* head = NULL;
	node* tail = NULL; 
	cin >> data;
	while(data != -1)
	{
		node* newNode = new node(data);
		if(head == NULL)
			head = tail = newNode;
		else
		{
			tail->next = newNode;
			tail = tail->next;
		}
		cin >> data;
	}
	return head;
}

void print(node* head)
{
	node* tmp;
	tmp = head;
	while(tmp != NULL)
	{
		cout << tmp->data <<" ";
		tmp = tmp->next;
	}
	cout << endl;
}

node* reversal(node* head)
{
	node* sRes;
	node* tail;
	if(head==NULL || head->next==NULL)
		return head;
	sRes = reversal(head->next);
	tail = head->next;
	head->next = NULL;
	tail->next = head;
	return sRes;
}
node* kReverse(node* head, int n)
{
	if(head == NULL)
		return head;
	int lc = n-1;
	node* head1 = head;
	node* tail1 = head;
	node* head2;
	// cout << "checkpoint1" << endl;
	// cout << "head1->data " << head1->data << endl;
	// cout << "tail1->data " << tail1->data << endl;
	while(lc && tail1->next != NULL)
	{
		tail1 = tail1->next;
		lc--;
	}
	// cout << "tail1->data " << tail1->data << endl;
	// cout << "checkpoint2" << endl;
	head2 = tail1->next;
	tail1->next = NULL;
	// print(head1);
	// print(head2);
	tail1 = head1;
	head1 = reversal(head1);
	// print(head1);
	head2 = kReverse(head2, n);
	// cout << "checkpoint3" << endl;
	// print(head2);
	// cout << "tail1->data " << tail1->data << endl;
	// cout << "checkpoint4" << endl;
	tail1->next = head2;
	// print(head1);
	return head1;
}

int main()
{
	int n;
	node* head;
	head = input();
	// print(head);
	// head = reversal(head);
	// print(head);
	cin >> n;
	head = kReverse(head, n);
	print(head);
	return 0;
}