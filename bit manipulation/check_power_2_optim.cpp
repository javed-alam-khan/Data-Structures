#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n > 0)
	{
		int r = n & (n-1);
		if(r == 0)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}