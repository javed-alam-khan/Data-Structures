#include <iostream>
using namespace std;
void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void swap(int* a, int* b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
void pushZeroesEnd(int *arr, int n)
{
	int i = 0;
	for(int j=0; j<n; j++)
	{
		cout << "i " << i << "\t" << "arr[i]\t" << arr[i] << endl; 
		cout << "j " << j << "\t" << "arr[j]\t" << arr[j] << endl;
		if(arr[j] != 0)
		{
			cout << "non zero" << endl;
			swap(&arr[i], &arr[j]);
			i++;
		}
		print(arr, n);
		cout << endl;
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
		pushZeroesEnd(arr, n);
		print(arr, n);
	}
	return 0;
}