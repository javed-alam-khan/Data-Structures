#include <iostream>
using namespace std;
void display(int arr[], int n)
{
	cout << "inside display " << sizeof(arr) << endl;
	cout << arr[0] << " " << arr[n-1] << endl;
}
int main()
{
	int arr[100];
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	// cout << arr << endl;
	cout << "inside main " << sizeof(arr) << endl;
	display(arr, n);
	return 0;
}