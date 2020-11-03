#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int r = 0;
	int i = 0;
	int rem;
	cin >> n;
	while(n)
	{
		rem = n%10;
		r += rem * pow(2,i++);
		n = n/10;
	}
	cout << r << endl;
	return 0;
}