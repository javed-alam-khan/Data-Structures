#include <iostream>
using namespace std;

long staircase(int n)
{
	if(n==0 || n==1)
		return 1;
	if(n==2)
		return 2;
	long a = staircase(n-1);
	long b = staircase(n-2);
	long c = staircase(n-3);
	return a + b + c;
}

int main()
{
	int n;
	cin >> n;
	cout << staircase(n) << endl;
	return 0;
}