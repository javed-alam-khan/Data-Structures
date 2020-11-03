#include<iostream>
#include<vector>
using namespace std;
class PriorityQueue
{
	private:
	vector<int> vect;
	
	public:
	PriorityQueue()
	{

	}

	int getSize()
	{
		return vect.size();
	}

	bool isEmpty()
	{
		if(vect.size() == 0)
			return true;
		else
			return false;
	}

	int getMin()
	{
		if(vect.size() == 0)
			return 0;
		return vect[0];
	}

	void insert(int key)
	{
		vect.push_back(key);
		int childInd = getSize()-1;
		int parentInd = (childInd-1)/2;
		while(vect[childInd] < vect[parentInd])
		{
			swap(vect[childInd], vect[parentInd]);
			childInd = parentInd;
			parentInd = (parentInd-1)/2;
		}
	}

	void display()
	{
		for(int i=0; i<vect.size(); i++)
			cout << vect[i] << " ";
		cout << endl;
	}

	int removeMin()
	{
		// cout << "Inside removeMin" << endl;
		if(vect.size() == 0)
		{
			return 0;
		}
		int result = vect[0];
		// cout << "result " << result << endl;
		swap(vect[0], vect[vect.size()-1]);
		// display();
		vect.pop_back();
		// display();
		int PI = 0;
		int minInd = 0;
		int LC = 2 * PI + 1;
		// cout << "LC "<< LC << endl;
		int RC = 2 * PI + 2;
		// cout << "RC "<< RC << endl;
		// cout << "vect.size() " << vect.size() << endl;
		while(LC < vect.size())
		{
			// cout << "while" << endl;
			if(RC < vect.size())
			{
				// cout << "first if" << endl;
				if(vect[LC] < vect[RC])
				{
					// cout << "second if" << endl;
					// cout << minInd << " " << vect[minInd] << endl;
					// cout << LC << " " << vect[LC] << endl;
					if(vect[minInd] > vect[LC])
					{
						// cout << "third if" << endl;
						swap(vect[minInd], vect[LC]);
						minInd = LC;
					}
				}
				else
				{
					// cout << "else" << endl;
					if(vect[minInd] > vect[RC])
					{
						// cout << "fourth if" << endl;
						swap(vect[minInd], vect[RC]);
						minInd = RC;
					}
				}
			}
			else
			{
				// cout << "2nd else" << endl;
				if(vect[minInd] > vect[LC])
				{
					// cout << "fifth if" << endl;
					swap(vect[minInd], vect[LC]);
					minInd = LC;
				}
			}
			if(minInd == PI)
				break;
			PI = minInd;
			LC = 2 * PI + 1;
			RC = 2 * PI + 2;
		}

		return result;
	}
};

int main()
{
	PriorityQueue pq;
	// pq.display();
	// cout << "size " << pq.getSize() << endl;
	// cout << "isEmpty " << pq.isEmpty() << endl;
	// cout << "minimum " << pq.getMin() << endl;
	// cout << endl;
	pq.insert(100);
	pq.insert(90);
	pq.insert(95);
	pq.insert(80);
	pq.insert(75);
	pq.insert(85);
	pq.display();
	// cout << "size " << pq.getSize() << endl;
	// cout << "isEmpty " << pq.isEmpty() << endl;
	// cout << "minimum " << pq.getMin() << endl;
	// cout << pq.removeMin() << endl;
	// pq.display();
	cout << pq.removeMin() << endl;
	pq.display();
	cout << pq.removeMin() << endl;
	pq.display();
	cout << pq.removeMin() << endl;
	pq.display();
	cout << pq.removeMin() << endl;
	pq.display();
	return 0;
}