#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("encyin.txt", "r", stdin);
	freopen("encyout.txt", "w", stdout);
	int n;
	cin >> n;
	int q;
	cin >> q;
	// int* arr = new int[n];
	int arr[10000];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for(int i = 0; i < q; i++)
	{
		int query;
		cin >> query;
		cout << arr[query-1] << endl;
	}
	return 0;
}