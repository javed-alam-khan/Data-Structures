#include <iostream>
using namespace std;

template <typename T> 
class queueUsingArr
{
	private:
	T* arr;
	int size;
	int rear;
	int front;
	int capacity;
	public:
	queueUsingArr(int capacity)
	{
		arr = new T[capacity];
		rear = 0;
		front = -1;
		size = 0;
		this->capacity = capacity;
	}
	void enqueue(T elem)
	{
		if(size == capacity)
		{
			cout << "queue is full" << endl;
			cout << "Exited enqueue" << endl;
			return;
		}
		arr[rear] = elem;
		rear = (rear + 1) % capacity;
		if(front == -1)
			front = 0;
		size++;
	}
	void print()
	{
		cout << "Entered print" << endl;
		// cout << "size " << size << endl;
		if(isEmpty())
			cout << "queue is empty" << endl;
		else if(size == capacity)
			cout << "queue is full" << endl;
		cout << "start " << front << endl;
		cout << "end " << rear << endl;
		for(int lv=0; lv<capacity; lv++)
			cout << arr[lv] << " ";
		cout << endl;
		cout << "Exited print" << endl;
	}
	bool isEmpty()
	{
		return size == 0;
	}
	int getSize()
	{
		return size;
	}
	T getFront()
	{
		if(isEmpty())
		{
			cout << "queue is empty" << endl;
			return 0;
		}
		return arr[front];
	}
	T dequeue()
	{
		T tmp;
		if(isEmpty())
		{
			cout << "queue is empty" << endl;
			return 0;
		}

		tmp = arr[front];
		front = (front + 1) % capacity;
		size--;
		if(isEmpty())
		{
			cout << "queue is empty now" << endl;
			front = -1;
			rear = 0;
		}
		return tmp;
	}
};


int main()
{
	cout << "First part" << endl;
	queueUsingArr <int> q1(5);
	q1.enqueue(10);
	q1.enqueue(20);
	q1.enqueue(30);
	q1.enqueue(40);
	q1.enqueue(50);
	q1.enqueue(60);
	cout << q1.getFront() << endl;
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	cout << q1.dequeue() << endl;
	cout << q1.getSize() << endl;
	cout << q1.isEmpty() << endl;

	cout << "Second part" << endl;
	queueUsingArr <char> q2(5);
	q2.enqueue('a');
	q2.enqueue('b');
	q2.enqueue('c');
	q2.enqueue('d');
	q2.enqueue('e');
	q2.enqueue('f');
	cout << q2.getFront() << endl;
	cout << q2.dequeue() << endl;
	cout << q2.dequeue() << endl;
	cout << q2.dequeue() << endl;
	cout << q2.getSize() << endl;
	cout << q2.isEmpty() << endl;
	return 0;
}