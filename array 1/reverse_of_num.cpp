#include<iostream>
using namespace std;
int main()
{
	int n;
	int rev = 0;
	cin >> n;
	while(n)
	{
		int rem = n % 10;
		rev = rev * 10 + rem;
		n /= 10;
	}
	cout << rev << endl;
	return 0;
}