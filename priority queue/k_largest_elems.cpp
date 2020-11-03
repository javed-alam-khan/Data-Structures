#include<iostream>
#include<queue>
#include<vector>
using namespace std;
vector<int> kLargest(int arr[], int size, int k)
{
	priority_queue<int, vector<int>, greater<int>> pq;
	for(int i = 0; i < k; i++)
	{
		pq.push(arr[i]);
	}
	for(int i = k; i < size; i++)
	{
		if(arr[i] > pq.top())
		{
			pq.pop();
			pq.push(arr[i]);
		}
	}
	vector<int> vect;
	for(int i = 0; i < k; i++)
	{
		vect.push_back(pq.top());
		pq.pop();
	}
	return vect;
}
int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	int k;
	cin >> k;
	vector<int> result = kLargest(arr, size, k);
	for(int i = 0; i <result.size(); i++)
		cout << result[i] << " ";
	cout << endl;
	return 0;
}