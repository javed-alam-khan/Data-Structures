#include <bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	int i;
	cin >> num;
	cin >> i;
	// cout << (i << 1) << endl;
	int res = num ^ (1 << i);
	cout << res << endl;
	return 0;

}