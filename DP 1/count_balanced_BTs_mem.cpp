#include <iostream>
using namespace std;
#define MOD 1000000007

int helper(int h, int* res)
{
	if(h==0 || h==1)
		return 1;
	if(res[h] != -1)
		return res[h];
	if(res[h] != -1)
		return res[h];
	int a = helper(h-1, res);
	int b = helper(h-2, res);
	int res1 = ( (long)(a) * a) % MOD;
	int res2 = (2 *   ( (long)(a) * b) )  % MOD;
	
	res[h] = (res1 + res2) % MOD;
	return res[h];
}

int binaryTreesOfHeightH(int h) 
{
	int* res = new int[h+1];
	for(int i=0; i<h+1; i++)
		res[i] = -1;
	return helper(h, res);
}

int main()
{
	int h;
	cin >> h;
	cout << binaryTreesOfHeightH(h) << endl;
	return 0;
}