#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int evenSum = 0;
	for(int i = 0; i < n; i += 2)
	{
		if(arr[i]%2 == 0)
			evenSum += arr[i];
	}
	int oddSum = 0;
	for(int i = 1; i < n; i += 2)
	{
		if(arr[i]%2 != 0)
			oddSum += arr[i];
	}
	cout << evenSum << " " << oddSum << endl;
	return 0;
}