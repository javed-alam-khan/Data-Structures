#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("rainin.txt", "r", stdin);
	freopen("rainout.txt", "w", stdout);
	int n;
	cin >> n;
	int capacity;
	cin >> capacity;
	int s = 0;
	int i = 0;
	for(; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		s += tmp;
		if(s >= capacity)
			break;
	}
	cout << i+1 << endl;
	return 0;
}