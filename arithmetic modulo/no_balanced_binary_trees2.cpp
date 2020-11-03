#include <iostream>
#include <cmath>
using namespace std;
int balancedBTs(int h)
{
	if(h==0 || h==1)
		return 1;
	int MOD = pow(10, 9) + 7;
	int x = balancedBTs(h-1);
	int y = balancedBTs(h-2);
	long tmp1 = (long)(x) * x;
	long tmp2 = (long)(x) * y * 2;
	int r1 = (int)(tmp1 % MOD);
	int r2 = (int)(tmp2 % MOD);
	return (r1+r2) % MOD;
}
int main()
{
	int h;
	cin >> h;
	cout << balancedBTs(h) << endl;
	return 0;
}