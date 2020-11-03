#include <iostream>
using namespace std;
int main()
{
	int n;
	int i;
	cin >> n;
	cin >> i;
	int m = 1 << i;
	m = m-1;
	cout << (n & m) << endl;
	return 0;
}