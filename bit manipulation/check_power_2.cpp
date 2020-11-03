#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	if(n > 0)
	{
		while(n%2 == 0)
		{
			// n = n/2;
			n = n >> 1;
			// cout << "n " << n << endl;
		}
		if(n == 1)
			cout << "true" << endl;
		else
			cout << "false" << endl;
	}
	return 0;
}