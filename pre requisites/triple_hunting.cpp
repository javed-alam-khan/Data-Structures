#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("tripin.txt", "r", stdin);
	freopen("tripout.txt", "w", stdout);
	int n;
	cin >> n;
	// int* arr = new int[n];
	int arr[1000000];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int c = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 3 == 0)
		{
			c++;
		}
	}
	if(c == 0)
	{
		cout << "Nothing here!" << endl;
		exit(0);	//successful termination as exit(1) for unsuccessful termination
	}

	cout << c << endl;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] % 3 == 0)
			cout << i+1 << " ";
	}
	cout << endl;
	return 0;
}