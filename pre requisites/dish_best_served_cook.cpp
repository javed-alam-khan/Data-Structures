#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("dishin.txt", "r", stdin);
	freopen("dishout.txt", "w", stdout);
	int n;
	cin >> n;
	int sum = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	for(int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		sum += tmp;
		if(min > tmp)
			min = tmp;
		if(max < tmp)
			max = tmp;
	}
	cout << min << " " << max << " " <<  sum/n << endl;
	return 0;
}