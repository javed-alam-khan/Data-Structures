#include <iostream>
using namespace std;

int turnOffIthBit(int n, int i)
{
	int m = (1 << i);
	m = ~m;
	return n & m;
} 

int main()
{
	int n;
	int i;
	cin >> n;
	cin >> i;
	n = turnOffIthBit(n, i);
	cout << n << endl;
	return 0;
}