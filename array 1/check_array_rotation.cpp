#include <iostream>
#include <climits>
using namespace std;

int arrayRotateCheck(int *arr, int n)
{
	int min = INT_MAX;
	int minIndex = 0;
	for(int i=0; i<n; i++)
	{
		cout << "i " << i << "\t";
		if(min > arr[i])
		{
			min = arr[i];
			minIndex = i;
		}
		cout << "min " << min << "\t";
		cout << "min index " << minIndex << endl;
	}
	return minIndex;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i=0; i<n; i++)
			cin >> arr[i];
		cout << arrayRotateCheck(arr, n) << endl;
	}

	return 0;
}