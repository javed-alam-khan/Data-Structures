#include <iostream>
#include <climits>
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

class stack
{
	private:
	node* head;
	int size;
	public:
	stack()
	{
		head = NULL;
		size = 0;
	}

	bool isEmpty()
	{
		if(size == 0)
			return true;
		else
			return false;
	}

	void push(int data)
	{
		node* newNode = new node(data);
		if(head == NULL)
			head = newNode;
		else
		{
			newNode->next = head;
			head = newNode;
		}
		size++;
	}

	int getSize()
	{
		return size;
	}

	int top()
	{
		return head->data;
	}

	int pop()
	{
		if(size == 0)
		{
			cout << "stack is empty" << endl;
			return INT_MIN;
		}
		int tmp = head->data;
		head = head->next;
		size--;
		return tmp;
	}

	void print()
	{
		node* tmp = head;
		while(tmp != NULL)
		{
			cout << tmp->data << " ";
			tmp = tmp->next;
		}
		cout << endl;
		// cout << "size " << size << endl;
	}
};

int main()
{
	stack s1;
	// cout << s1.isEmpty() << endl;
	// cout << s1.getSize() << endl;
	s1.push(10);
	// cout << s1.getSize() << endl;
	// cout << s1.isEmpty() << endl;
	s1.print();
	s1.push(20);
	// cout << s1.getSize() << endl;
	s1.print();
	s1.push(30);
	s1.print();
	cout << s1.top() << endl;
	cout << s1.top() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	return 0;
}