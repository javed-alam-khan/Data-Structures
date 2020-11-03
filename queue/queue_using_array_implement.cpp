#include <iostream>
#include <climits>
using namespace std;
#include "queue_using_array.h"
int main()
{
	// queueUsingArr q(5);
	// q.print();
	// cout << q.getSize() << endl;
	// cout << q.isEmpty() << endl;
	// q.enqueue(10);
	// q.print();
	// cout << q.getSize() << endl;
	// cout << q.isEmpty() << endl;
	// cout << q.getFront() << endl;
	// q.dequeue();
	// q.print();
	// cout << q.getSize() << endl;
	// cout << q.isEmpty() << endl;
	// cout << q.getFront() << endl;

	queueUsingArr q(5);
	q.enqueue(10);
	q.enqueue(20);
	q.enqueue(30);
	q.enqueue(40);
	q.enqueue(50);
	q.enqueue(60);

	cout << q.getFront() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.dequeue() << endl;
	cout << q.getSize() << endl;
	cout << q.isEmpty() << endl;
	return 0;
}