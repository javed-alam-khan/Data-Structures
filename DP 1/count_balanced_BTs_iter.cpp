#include <iostream>
using namespace std;
#define MOD 1000000007
int binaryTreesOfHeightH(int h)
{
	int* res = new int[h+1];
	res[0] = 1;
	res[1] = 1;
	for(int i=2; i<h+1; i++)
	{
		int a = res[i-1];
		int b = res[i-2];
		int res1 = ( (long)(a) * a) % MOD;
		int res2 = (2 * ( (long)(a) * b)) % MOD;
		res[i] = (res1 + res2) % MOD;
	}
	return res[h];
}

int main()
{
	int h;
	cin >> h;
	cout << binaryTreesOfHeightH(h) << endl;
	return 0;
}