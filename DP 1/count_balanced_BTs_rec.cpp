#include <iostream>
using namespace std;
#define MOD 1000000007
int balancedBTs(int h)
{
	if(h==0 || h==1)
	{
		return 1;
	}
	int a = balancedBTs(h-1) % MOD;
	int b = balancedBTs(h-2) % MOD;
	
	int res1 = (int)(((long)(a) * a) % MOD);
	int res2 = (int)((2 * (long)(a) * b) % MOD);
	return (res1 + res2) % MOD;
}
int main()
{
	int h;
	cout << "Enter the height" << endl;
	cin >> h;
	cout << balancedBTs(h) << endl;
	return 0;
}