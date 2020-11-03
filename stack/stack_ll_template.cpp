#include <iostream>
#include <climits>
using namespace std;
template <typename T> 
class node
{
	public:
	T data;
	node<T>* next;
	node(T data)
	{
		this->data = data;
		next = NULL;
	}
};

template <typename T>
class stack
{
	private:
	node<T>* head;
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

	void push(T data)
	{
		node<T>* newNode = new node<T> (data);
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

	T top()
	{
		if(size == 0)
		{
			cout << "stack is empty" << endl;
			return 0;
		}
		return head->data;
	}

	T pop()
	{
		T tmp;
		node<T>* waste;
		if(size == 0)
		{
			cout << "stack is empty" << endl;
			return 0;
		}
		tmp = head->data;
		waste = head;
		head = head->next;
		delete waste;
		size--;
		return tmp;
	}

	void print()
	{
		node<T>* tmp = head;
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
	stack <int> s1;
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

	stack <char> s2;
	// cout << s2.isEmpty() << endl;
	// cout << s2.getSize() << endl;
	s2.push('a');
	// cout << s2.getSize() << endl;
	// cout << s2.isEmpty() << endl;
	s2.print();
	s2.push('b');
	// cout << s2.getSize() << endl;
	s2.print();
	s2.push('c');
	s2.print();
	cout << s2.top() << endl;
	cout << s2.top() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	return 0;
}