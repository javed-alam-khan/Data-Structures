#include <iostream>
using namespace std;
bool checkMaxHeap(int arr[], int n)
{
	int lc = (n-2)/2;
	for(int i = 0; i <= lc; i++)
	{
		if(arr[i] >= arr[2*i+1])
		{
			if(arr[i] >= arr[2*i+2])
			{

			}
			else
				return false;
		}

		else
			return false;
	}
	return true;
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
	cout << checkMaxHeap(arr, n) << endl;
}