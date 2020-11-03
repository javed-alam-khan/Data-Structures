#include <iostream>
using namespace std;

long helper(int n, long* res)
{
	if(n==0 || n==1)
		return 1;
	if(n==2)
		return 2;
	if(res[n] != -1)
		return res[n];
	long a = helper(n-1, res);
	long b = helper(n-2, res);
	long c = helper(n-3, res);
	res[n] = a+b+c;
	return res[n];
}

long staircase(int n)
{
	long *res = new long[n+1];
	for(int i=0; i<n+1; i++)
		res[i] = -1;
	return helper(n, res);
}

int main()
{
	int n;
	cin >> n;
	cout << staircase(n) << endl;
	return 0;
}