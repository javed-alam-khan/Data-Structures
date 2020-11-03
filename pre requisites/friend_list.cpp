#include <bits/stdc++.h>
#include <climits>
using namespace std;
int main()
{
	freopen("listin.txt", "r", stdin);
	freopen("listout.txt", "w", stdout);
	int f;
	cin >> f;
	int arr[1001];
	for(int i = 0; i < 1001; i++)
	{
		arr[i] = 0;
	}
	int fID;
	int sID;
	for(int i = 0; i < f; i++)
	{
		cin >> fID;
		arr[fID]++;
		cin >> sID;
		arr[sID]++;
	}
	int maxCount = INT_MIN;
	for(int i = 0; i < 1001; i++)
	{
		if(arr[i] > maxCount)
			maxCount = arr[i];
	}
	for(int i = 0; i < 1001; i++)
	{
		if(arr[i] == maxCount)
			cout << i << endl;
	}
	return 0;
}