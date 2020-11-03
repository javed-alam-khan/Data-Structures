#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	// cout << sizeof(arr) << endl;
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> arr[i];
	// cout << sizeof(arr) << endl;
	for(int i=0; i<10; i++)
		cout << arr[i] <<" ";
	cout << endl;
	return 0;
}