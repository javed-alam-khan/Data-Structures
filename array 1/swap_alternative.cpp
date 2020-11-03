#include<iostream>
using namespace std;

int swapAlternate(int* array, int n)
{
	for(int i = 0; i < n-1; i += 2)
	{
		int temp = array[i];
		array[i] = array[i+1];
		array[i+1] = temp;
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
		int *array = new int[n];

		// taking input
		for(int i=0; i<n; i++)
		{
			cin >> array[i];
		}
		swapAlternate(array, n);

		// printing the array
		for(int i=0; i<n; i++)
		{
			cout << array[i] <<" ";
		}
		cout << endl;

	}
	return 0;
}