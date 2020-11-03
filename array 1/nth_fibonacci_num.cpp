#include<iostream>
using namespace std;

int fibonacci(int n)
{
	if(n==1 || n==2)
		return 1;
	int a = 1;
	int b = 1;
	int c;
	for(int lc = 2; lc < n; lc++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}

int main()
{
	int n;
	cin >> n;
	cout << fibonacci(n) << endl;
	return 0;
}