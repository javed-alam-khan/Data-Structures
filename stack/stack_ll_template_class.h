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