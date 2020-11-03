#include<iostream>
#include<queue>
using namespace std;
int buyTicket(int* arr, int n, int k)
{
	queue<int> q;
	for(int i = 0; i < n; i++)
		q.push(i);
	priority_queue<int> maxPQ;
	for(int i = 0; i < n; i++)
		maxPQ.push(arr[i]);
	int result = 0;
	while(1)
	{
		if(arr[q.front()] == maxPQ.top())
		{
			result++;
			if(q.front() == k)
				break;
			maxPQ.pop();
			q.pop();
		}
		else
		{
			int tmp;
			tmp = q.front();
			q.pop();
			q.push(tmp);
		}
	}
	return result;
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
	cout << buyTicket(arr, n, k) << endl;
	return 0;
}