#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	int l = 0;
	int r = n-1;
	while(l < r)
	{
		cout << (arr[l]+arr[r])/10 << " ";
		cout << (arr[l]+arr[r])%10 << endl;
		l++;
		r--;
	}
	return 0;
}
