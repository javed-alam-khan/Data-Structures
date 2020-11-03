#include <iostream>
using namespace std;
void Leaders(int* arr, int n)
{
	int i=0;
	for(; i<n-1; i++)
	{
		int flag = 1;
		for(int j=i+1; j<n; j++)
		{
			if(arr[i] <= arr[j])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 1)
			cout << arr[i] << " ";
	}
	cout << arr[i] << endl;
}
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i=0; i<n; i++)
		cin >> arr[i];
	Leaders(arr, n);
	return 0;
}