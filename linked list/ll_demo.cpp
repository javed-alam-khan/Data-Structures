#include<iostream>
#include"node.cpp"
using namespace std;
node* input()
{
	int data;
	cin>>data;
	node *head = NULL;
	node *tail = NULL;
	while(data != -1)
	{
		node *newNode = new node(data);
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
void print(node *head)
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
	// node n1(10);
	// node *head = &n1;
	// node n2(20);
	// n1.next = &n2;
	// node n3(30);
	// n2.next = &n3;
	// node n4(40);
	// n3.next = &n4;
	// print(head);
	// print(head);



	// node *n3 = new node(100);
	// node *head = n3;
	// node *n4 = new node(200);
	// n3->next = n4;
	// while(head != NULL)
	// {
	// 	cout<<head->data<<" ";
	// 	head = head->next;
	// }
	// cout<<endl;

	node *head = input();
	print(head);
	return 0;
}