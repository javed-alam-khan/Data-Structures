#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	int i = 0;
	long res = 0;
	cin >> n;
	while(n)
	{
		int rem = n % 2;
		long p = pow(10,i++);
		res = res + rem * p;
		n = n / 2;
	}

	cout << res << endl;
	return 0;
}