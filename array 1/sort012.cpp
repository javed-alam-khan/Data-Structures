#include <iostream>
using namespace std;

void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort012(int *arr, int n)
{
	int nz = 0;
	int nt = n-1;
	int i=0;
	while(i <= nt)
	{
		if(arr[i] == 0)
		{
			swap(arr[nz], arr[i]);
			nz++;
			i++;
		}
		else if(arr[i] == 2)
		{
			swap(arr[i], arr[nt]);
			nt--;
		}
		else
			i++;
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
		for(int i=0; i<n; i++)
			cin >> arr[i];
		// print(arr, n);
		sort012(arr, n);
		print(arr, n);
	}

	return 0;
}