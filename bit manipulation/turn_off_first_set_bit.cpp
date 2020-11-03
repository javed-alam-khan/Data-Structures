#include <iostream>
using namespace std;
int turnOffFirstSetBit(int n)
{
	int i = 1;
	while(i <= n)
	{
		if((n&i) != 0)
			return n^i;
		i = i << 1;
	}
	return 0;
}


int main()
{
	int n;
	cin >> n;
	n = turnOffFirstSetBit(n);
	cout << n << endl;
	return 0;
}