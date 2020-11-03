#include <iostream>
using namespace std;
void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}
void reverse(int arr[], int n)
{
	int i = 0;
	int j = n-1;
	while(i < j)
	{
		int tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
		i++;
		j--;
	}
}
void rotate(int arr[], int d, int n)
{
	reverse(arr, d);
	reverse(&arr[d], n-d);
	reverse(arr, n);
}
int main()
{	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int d;
		cin >> n;
		int* arr = new int[n];
		for(int i=0; i<n; i++)
			cin >> arr[i];
		cin >> d;
		rotate(arr, d, n);
		print(arr, n);
	}
	return 0;
}