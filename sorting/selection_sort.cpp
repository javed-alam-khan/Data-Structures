#include <iostream>
#include <climits>
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

void selectionSort(int* arr, int n)
{
	for(int i=0; i<n-1; i++)
	{
		int min = INT_MAX;
		int min_index = -1;
		for(int j=i; j<n ; j++)
		{
			if(arr[j] < min)
			{
				min = arr[j];
				min_index = j;
			}
		}
		swap(&arr[i], &arr[min_index]);
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
		for(int i=0; i<n; i++)
			cin >> arr[i];
		selectionSort(arr,n);
		print(arr, n);
		delete[] arr;
	}
	return 0;
}