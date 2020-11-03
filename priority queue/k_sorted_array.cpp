#include<iostream>
#include<queue>
using namespace std;
void k_sorted_array(int arr[], int size, int k)
{
	priority_queue<int> pq;
	for(int i = 0; i < k; i++)
	{
		pq.push(arr[i]);
	}
	int j = 0;
	for(int i = k; i < size; i++)
	{
		arr[j] = pq.top();
		j++;
		pq.pop();
		pq.push(arr[i]);
	}
	for(int i = 0; i < k; i++)
	{
		arr[j] = pq.top();
		j++;
		pq.pop();
	}
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
	k_sorted_array(arr, size, k);
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}