#include<iostream>
#include<queue>
using namespace std;
int main()
{
	priority_queue<int, vector<int>, greater<int>> pq;
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	for(int i = 0; i < n; i++)
		pq.push(arr[i]);
	while(!pq.empty())
	{
		cout << pq.top() << " ";
		pq.pop();
	}
	cout << endl;
	return 0;
}