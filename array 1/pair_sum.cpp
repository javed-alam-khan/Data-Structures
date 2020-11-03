#include <iostream>
using namespace std;
int pairSum(int* array, int n, int x)
{
	int count = 0;
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			if(array[i] + array[j] == x)
				count++;
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
		cout << pairSum(array, n, x) << endl;
	}
	return 0;
}