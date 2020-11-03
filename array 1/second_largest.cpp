#include <iostream>
#include <climits>
using namespace std;
int findSecondLargest(int *arr, int n)
{
	int largest = INT_MIN;
	int sLargest = INT_MIN;
	for(int lv=0; lv<n; lv++)
	{
		if(largest < arr[lv])
		{
			sLargest = largest;
			largest = arr[lv];
		}
		else
		{
			if(arr[lv] != largest && sLargest < arr[lv])
				sLargest = arr[lv];
		}
	}
	return sLargest;
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
		cout << findSecondLargest(arr, n) << endl;
	}

	return 0;
}