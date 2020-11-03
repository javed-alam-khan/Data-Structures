#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int maxDiff = INT_MIN;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(arr[j]-arr[i] > maxDiff)
				maxDiff = arr[j]-arr[i];
		}
	}
	cout << maxDiff << endl;
	return 0;
}