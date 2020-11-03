class DynamicArray
{
	private:
	int *array;
	int nextIndex;
	int capacity;
	
	public:
	DynamicArray()						//Default constructor
	{
		array = new int[3];
		nextIndex = 0;
		capacity = 3;
	}


	DynamicArray(DynamicArray const &d)	//Copy constructor
	{
		// array = d.array;				//Shallow copy
		
		//Deep copy
		array = new int[d.capacity];	
		for(int lv = 0; lv < d.nextIndex; lv++)
		{
			array[lv] = d.array[lv];
		}
		nextIndex = d.nextIndex;
		capacity = d.capacity;
	}


	void operator=(DynamicArray const &d)	//Copy constructor
	{
		// array = d.array;				//Shallow copy
		
		//Deep copy
		array = new int[d.capacity];	
		for(int lv = 0; lv < d.nextIndex; lv++)
		{
			array[lv] = d.array[lv];
		}
		nextIndex = d.nextIndex;
		capacity = d.capacity;
	}


	void add(int e)
	{
		if(nextIndex == capacity)
		{
			int *newArray = new int[2*capacity];
			for(int lv=0; lv<nextIndex; lv++)
			{
				newArray[lv] = array[lv];
			}
			delete[] array;
			array = newArray;
			capacity *= 2;
		}
		array[nextIndex] = e;
		nextIndex++;
	}

	void insert(int pos, int e)
	{
		if(pos < nextIndex)
		{
			array[pos] = e;
		}
		else if(pos == nextIndex)
			add(e);
		else
		{
			return;
		}
	}

	void print()
	{
		if(nextIndex >= 1)
		{
			for(int lv=0; lv<nextIndex; lv++)
				cout<<array[lv]<<" ";
			cout<<"\n";
		}
		cout<<"nextIndex : "<<nextIndex<<endl;
		cout<<"capacity : "<<capacity<<endl;
		return;
	}

	int getElem(int index)
	{
		if(index < nextIndex)
			return array[index];
		else
			return -1;
	}
	
};