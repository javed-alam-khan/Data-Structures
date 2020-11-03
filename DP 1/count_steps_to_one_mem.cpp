#include <iostream>
#include <climits>
using namespace std;

int helper(int n, int* res)
{
	if(n == 1)
		return 0;
	if(res[n] != -1)
		return res[n];
	int a;
	int b = INT_MAX;
	int c = INT_MAX;

	a = helper(n-1, res);
	if(n%2 == 0)
		b = helper(n/2, res);
	if(n%3 == 0)
		c = helper(n/3, res);

	res[n] = 1 + min(min(a,b),c);
	return res[n];
}

int countStepsToOne(int n)
{
	int* res = new int[n+1];
	for(int i=0; i<n+1; i++)
		res[i] = -1;
	return helper(n,res);
}

int main()
{
	int n;
	cout << "Enter n" << endl;
	cin >> n;
	cout << countStepsToOne(n) << endl;
	return 0;
}