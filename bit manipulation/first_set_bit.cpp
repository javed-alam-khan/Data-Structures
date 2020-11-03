#include <iostream>
using namespace std;
int returnFirstSetBit(int n)
{
	int i = 1;
	while(i <= n)
	{
		if((n&i) != 0)
			return i;
		i = i << 1;
	}
	return 0;
}

int main()
{
	int n;
	cin >> n;
	cout << returnFirstSetBit(n) << endl;
	return 0;
}