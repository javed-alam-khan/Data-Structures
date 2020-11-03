#include <iostream>
using namespace std;
void print(int* arr, int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " " ;
	cout << endl;
}
void insertionSort(int* arr, int n)
{
	for(int i=1; i<n; i++)
	{
		int j;
		int k;
		int count;
		int temp;
		temp = arr[i];
		j = i-1;
		count = 0;
		while(j >= 0)
		{
			if(arr[j] > arr[i])
				count++;
			j--;
		}

		k = i;
		while(count--)
		{
			arr[k] = arr[k-1];
			k--;
		}
		arr[k] = temp;
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
		int *arr = new int[n];
		for(int lv=0; lv<n; lv++)
			cin >> arr[lv];
		insertionSort(arr, n);
		print(arr, n);
	}
	return 0;
}