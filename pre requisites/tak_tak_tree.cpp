#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("taktakin.txt", "r", stdin);
	freopen("taktakout.txt", "w", stdout);
	int n;
	cin >> n;
	int count = 0;
	while((n-1)%11 != 0)
	{
		n *= 2;
		count = count + 1;
	}
	cout << count << " " << n << endl;
}