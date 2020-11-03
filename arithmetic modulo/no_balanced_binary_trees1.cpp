#include <bits/stdc++.h>
using namespace std;
#define MOD 1000000007
int balancedBTs(int h)
{
	if(h == 0)
		return 1;
	else if(h == 1)
		return 1;
	long a = balancedBTs(h-1) % MOD;
	long b = balancedBTs(h-2) % MOD;
	return ((a*a)%MOD + (2*a*b)%MOD) % MOD;
}



int main()
{
	int h;
	cin >> h;
	cout << balancedBTs(h) << endl;
	return 0;
}