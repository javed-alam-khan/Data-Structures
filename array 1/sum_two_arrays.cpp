#include <iostream>
#include <limits>
using namespace std;

void print(int* arr, int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void sumOfTwoArrays(int *arr1, int n, int *arr2, int m, int *arr3)
{
	int o = 1 + max(n, m);
	int i = n-1;
	int j = m-1;
	int c = 0;
	int k = o-1;
	for(; k > 0; k--)
	{
		int tmp;
		int rem;
		if(i == -1)
		{
			tmp = arr2[j] + c;
			j--;
		}
		else if(j == -1)
		{
			tmp = arr1[i] + c;
			i--;
		}
		else
		{
			tmp = arr1[i] + arr2[j] + c;
			i--;
			j--;
		}
		
		rem = tmp % 10;
		c = tmp/10;
		arr3[k] = rem;
	}
	arr3[k] = c;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int m;
		int o;
		cin >> n;
		int *arr1 = new int[n];
		for(int i=0; i<n; i++)
			cin >> arr1[i];
		cin >> m;
		int *arr2 = new int[m];
		for(int i=0; i<m; i++)
			cin >> arr2[i];
		o = 1 + max(n, m);
		int *arr3 = new int[o];
		sumOfTwoArrays(arr1, n, arr2, m, arr3);
		print(arr3, o);
		delete[] arr1;
		delete[] arr2;
		delete[] arr3;
	}

	return 0;
}