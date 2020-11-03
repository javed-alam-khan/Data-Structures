class stackUsingArr
{
	private:
	int* arr;
	int nextIndex;
	int capacity;

	public:
	stackUsingArr(int n)
	{
		// cout << "ENTERED constructor" << endl;
		arr = new int[n];
		// for(int lv=0; lv<n; lv++)
		// 	cout << arr[lv] << " ";
		// cout << endl;
		nextIndex = 0;
		// cout << "nextIndex " << nextIndex << endl; 
		capacity = n;
		// cout << "capacity " << capacity << endl;
		// cout << "EXITED constructor" << endl;
	}

	bool isEmpty()
	{
		// cout << "ENTERED isEmpty()" << endl;
		// cout << "EXITED isEmpty()" << endl;
		if(nextIndex == 0)
			return true;
		else
			return false;
	}

	int size()
	{
		// cout << "ENTERED size()" << endl;
		// cout << "EXITED size()" << endl;
		return nextIndex;
	}

	int top()
	{
		// cout << "ENTERED top()" << endl;
		// cout << "EXITED top()" << endl;
		if(nextIndex == 0)
		{
			cout << "stack is empty\n" ;
			return INT_MIN;
		}
		return arr[nextIndex-1];
	}

	int pop()
	{
		// cout << "ENTERED pop()" << endl;
		// cout << "EXITED pop()" << endl;
		if(nextIndex == 0)
		{
			cout << "stack is empty\n" ;
			return INT_MIN;
		}
		return arr[--nextIndex];
	}

	void push(int data)
	{
		// cout << "ENTERED push()" << endl;
		// cout << "data " << data << endl;
		if(nextIndex == capacity)
		{
			cout << "stack is full\n";
			return;
		}
		arr[nextIndex] = data;
		// cout << "nextIndex " << nextIndex << endl;
		// cout << "arr[nextIndex] " << arr[nextIndex] << endl;
		nextIndex++;
		// cout << "nextIndex " << nextIndex << endl;
		// cout << "capacity " << capacity << endl;
		// for(int lv=0; lv<capacity; lv++)
		// 	cout << arr[lv] << " ";
		// cout << endl;
		// cout << "EXITED push()" << endl;
	}

	void print()
	{
		// cout << "ENTERED print()" << endl;
		int lc = nextIndex - 1;
		while(lc >= 0)
		{
			// cout << "inside while " << endl;
			// cout << "lc " << lc << endl;
			cout << arr[lc] << " ";
			lc--;
		}
		cout << endl;
		// cout << "capacity " << capacity << endl;
		// for(int lv=0; lv<capacity; lv++)
		// 	cout << arr[lv] << " ";
		// cout << endl;
		// cout << "EXITED print()" << endl;
	}
};
