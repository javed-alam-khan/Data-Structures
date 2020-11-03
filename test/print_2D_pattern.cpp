#include <iostream>
using namespace std;

void print2DArray(int** arr, int n, int m)
{
	for(int i=0; i<n; i++)
	{
		int k = n-i;
		while(k)
		{
			for(int j=0; j<m; j++)
			{
				cout << arr[i][j] << " ";
			}
			cout << endl;
			k--;
		}
	}
}

int main()
{
	int n;
	int m;
	cin >> n;
	cin >> m;
	int** arr = new int* [n];
	for(int i=0; i<n; i++)
		arr[i] = new int [m];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
			cin >> arr[i][j];
	}
	
	print2DArray(arr, n, m);
}