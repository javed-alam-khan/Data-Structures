#include<iostream>
#include<queue>
using namespace std;
int kthLargest(int arr[], int n, int k)
{
	priority_queue< int, vector<int>, greater<int> > minPQ;
	for(int i=0; i<k; i++)
		minPQ.push(arr[i]);
	for(int i=k; i<n; i++)
	{
		if(arr[i] > minPQ.top())
		{
			minPQ.pop();
			minPQ.push(arr[i]);
		}
	}
	return minPQ.top();
}

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];
	int k;
	cin >> k;
	cout << kthLargest(arr, n, k) << endl;
	return 0;
}

