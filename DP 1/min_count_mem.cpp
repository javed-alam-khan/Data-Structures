#include <iostream>
#include <climits>
using namespace std;

int helper(int n, int* res)
{
	if(n == 0)
		return 0;
	if(res[n] != -1)
		return res[n];
	int result = INT_MAX;
	for(int i=1; i*i<=n; i++)
	{
		int tmp;
		tmp = 1 + helper(n - (i*i), res);
		if(tmp < result)
			result = tmp;
	}	
	res[n] = result;
	return res[n];
}

int minCount(int n)
{
	int* res = new int[n+1];
	for(int i=0; i<n+1; i++)
		res[i] = -1;
	return helper(n, res);
}

int main()
{
	int n;
	cin >> n;
	cout << minCount(n) << endl;
	return 0;
}