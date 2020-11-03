#include <iostream>
using namespace std;

int tripletSum(int* array, int n, int x)
{
	int count = 0;
	for(int i=0; i<n-2; i++)
	{
		for(int j=i+1; j<n-1; j++)
		{
			for(int k = j+1; k<n; k++)
			{
				if(array[i] + array[j] + array[k] == x)
					count++;
			}
		}
	}
	return count;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int *array = new int[n];
		for(int lv=0; lv<n; lv++)
		{
			cin >> array[lv];
		}
		int x;
		cin >> x;
		cout << tripletSum(array, n, x) << endl;
		delete[] array;
	}
	return 0;
}