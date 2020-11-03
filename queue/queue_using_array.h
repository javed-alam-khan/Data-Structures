class queueUsingArr
{
	private:
	int* arr;
	int size;
	int rear;
	int front;
	int capacity;
	public:
	queueUsingArr(int capacity)
	{
		arr = new int[capacity];
		rear = 0;
		front = -1;
		size = 0;
		this->capacity = capacity;
	}
	void enqueue(int elem)
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
	int getFront()
	{
		if(isEmpty())
		{
			cout << "queue is empty" << endl;
			return INT_MIN;
		}
		return arr[front];
	}
	int dequeue()
	{
		int tmp;
		if(isEmpty())
		{
			cout << "queue is empty" << endl;
			return INT_MIN;
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
