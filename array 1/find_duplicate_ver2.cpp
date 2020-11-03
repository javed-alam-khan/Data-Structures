#include <iostream>
using namespace std;
int duplicateNumber(int* array, int n)
{
	int arraySum = 0;
	int tempSum = (n-2)*(n-1)/2;
	for(int i=0; i<n; i++)
	{
		arraySum += array[i];
	}
	return arraySum-tempSum;
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
		cout << duplicateNumber(array, n) << endl;
	}
	return 0;
}