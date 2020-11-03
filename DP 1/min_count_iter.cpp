#include <iostream>
#include <climits>
using namespace std;

int minCount(int n)
{
	int* res = new int[n+1];
	res[0] = 0;
	for(int i=1; i<n+1; i++)
	{
		int output = INT_MAX;
		for(int j = 1; j*j <= i; j++)
		{
			int tmp = 1 + res[i - (j*j)];
			if(tmp < output)
				output = tmp;
		}
		res[i] = output;
	}
	return res[n];
}

int main()
{
	int n;
	cin >> n;
	cout << minCount(n) << endl;
	return 0;
}