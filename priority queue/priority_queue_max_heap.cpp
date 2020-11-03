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

	int getMax()
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
		while(vect[childInd] > vect[parentInd])
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

	int removeMax()
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
		int maxInd = 0;
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
				if(vect[LC] > vect[RC])
				{
					// cout << "second if" << endl;
					// cout << maxInd << " " << vect[maxInd] << endl;
					// cout << LC << " " << vect[LC] << endl;
					if(vect[LC] > vect[maxInd])
					{
						// cout << "third if" << endl;
						swap(vect[maxInd], vect[LC]);
						maxInd = LC;
					}
				}
				else
				{
					// cout << "else" << endl;
					if(vect[maxInd] < vect[RC])
					{
						// cout << "fourth if" << endl;
						swap(vect[maxInd], vect[RC]);
						maxInd = RC;
					}
				}
			}
			else
			{
				// cout << "2nd else" << endl;
				if(vect[maxInd] < vect[LC])
				{
					// cout << "fifth if" << endl;
					swap(vect[maxInd], vect[LC]);
					maxInd = LC;
				}
			}
			if(maxInd == PI)
				break;
			PI = maxInd;
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
	// cout << "max " << pq.getMax() << endl;
	// cout << endl;
	pq.insert(90);
	pq.insert(100);
	pq.insert(75);
	pq.insert(80);
	pq.insert(95);
	pq.insert(85);
	pq.display();
	// cout << "size " << pq.getSize() << endl;
	// cout << "isEmpty " << pq.isEmpty() << endl;
	// cout << "max " << pq.getMax() << endl;
	// cout << pq.removeMax() << endl;
	// pq.display();
	cout << pq.removeMax() << endl;
	pq.display();
	cout << pq.removeMax() << endl;
	pq.display();
	cout << pq.removeMax() << endl;
	pq.display();
	cout << pq.removeMax() << endl;
	pq.display();
	return 0;
}