#include <iostream>
using namespace std;

int turnOnIthBit(int n, int i)
{
	int m = (1 << i);
	n = n|m;
	return n;
} 

int main()
{
	int n;
	int i;
	cin >> n;
	cin >> i;
	n = turnOnIthBit(n, i);
	cout << n << endl;
	return 0;
}