#include <iostream>
#include <climits>
using namespace std;

int minCount(int n)
{
	if(n == 0)
		return 0;
	int res = INT_MAX;
	for(int i=1; i*i<=n; i++)
	{
		int tmp;
		tmp = 1 + minCount(n - (i*i));
		if(tmp < res)
			res = tmp;
	}	
	return res;
}

int main()
{
	int n;
	cin >> n;
	cout << minCount(n) << endl;
	return 0;
}