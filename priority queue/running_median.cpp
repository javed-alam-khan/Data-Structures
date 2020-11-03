#include <iostream>
#include <queue>
using namespace std;

void findMedian(int arr[], int n)
{
	priority_queue<int> maxPQ;
	priority_queue< int, vector<int>, greater<int> > minPQ;
	maxPQ.push(arr[0]);
	cout << maxPQ.top() << endl;
	for(int i = 1; i < n; i++)
	{
		if(arr[i] < maxPQ.top())
			maxPQ.push(arr[i]);
		else
			minPQ.push(arr[i]);	
		if(maxPQ.size() > 1 + minPQ.size())
		{
			int tmp = maxPQ.top();
			maxPQ.pop();
			minPQ.push(tmp);
		}

		else if(minPQ.size() > 1 + maxPQ.size())
		{
			int tmp = minPQ.top();
			minPQ.pop();
			maxPQ.push(tmp);
		}	

		if(maxPQ.size() == minPQ.size())
		{
			cout << (maxPQ.top() + minPQ.top())/2 << endl;
		}
		else
		{
			if(maxPQ.size() > minPQ.size())
				cout << maxPQ.top() << endl;
			else
				cout << minPQ.top() << endl;
		}
	}
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	findMedian(arr, n);
	return 0;
}