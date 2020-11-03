#include <iostream>
using namespace std;

void print(int* a, int n)
{
	for(int i=0; i<n; i++)
		cout << a[i] << " ";
	cout << endl;
}

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void sortZeroesAndOne(int* array, int n)
{
	int i = 0;
	int j = n-1;
	while(1)
	{
		while(array[i] == 0)
		{
			i++;
		}
		while(array[j] == 1)
		{
			j--;
		}
		if(i<j)
		{
			if(array[i] == 1 && array[j] == 0)
				swap(&array[i], &array[j]);
		}
		else
			break;
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
		for(int lv=0; lv<n; lv++)
		{
			cin >> array[lv];
		}
		sortZeroesAndOne(array, n);
		print(array, n);
		delete[] array;
	}
	return 0;
}