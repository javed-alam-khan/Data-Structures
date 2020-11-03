#include <iostream>
using namespace std;

void print(int* arr, int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int* arr, int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			// cout << "arr[j] " << arr[j] << endl;
			// cout << "arr[j+1] " << arr[j+1] << endl;
			if(arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
			// print(arr, n);
		}
	}
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int* arr = new int[n];
		for(int lv=0; lv<n; lv++)
			cin >> arr[lv];
		bubbleSort(arr, n);
		print(arr, n);
	}
	return 0;
}