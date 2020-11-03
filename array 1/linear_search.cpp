#include<iostream>
using namespace std;

int linearSearch(int array[], int n, int x)
{
	for(int i=0; i<n; i++)
	{
		if(array[i] == x)
			return i;
	}
	return -1;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int x;
		int index;
		cin >> n;
		int *array = new int[n];
		for(int i=0; i<n; i++)
		{
			cin >> array[i];
		}
		cin >> x;
		index = linearSearch(array, n, x);
		cout << index << endl;
	}
	return 0;
}