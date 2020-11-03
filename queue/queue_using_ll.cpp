#include <iostream>
using namespace std;
template <typename T>
class Node
{
	public:
	T data;
	Node<T>* next;
	Node(T data)
	{
		this->data = data;
		next = NULL;
	}
};

template <typename T>
class queue
{
	private:
	Node<T>* head;
	Node<T>* tail;
	int size;
	public:
	queue()
	{
		head = NULL;
		tail = NULL;
		size = 0;
	}
	int getSize()
	{
		return size;
	}
	bool isEmpty()
	{
		return size == 0;
	}
	void enqueue(T data)
	{
		Node<T>* newNode = new Node<T>(data);
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
		size++;
	}
	T getFront()
	{
		if(isEmpty())
			return 0;
		return head->data;
	}
	T dequeue()
	{
		T tmp;
		if(isEmpty())
			return 0;
		Node<T>* waste;
		tmp = head->data;
		waste = head;
		head = head->next;
		delete waste;
		size--;
		return tmp;
	}
};
int main()
{
	queue <int> q1;
	q1.enqueue(10);
	q1.enqueue(20);
	cout << q1.getSize() << endl;
	cout << q1.dequeue()<< endl;
	cout << q1.dequeue()<< endl;
	cout << q1.getSize() << endl;
	return 0;
}