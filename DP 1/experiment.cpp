#include <iostream>
using namespace std;
int ret()
{
	return 300001;
}
int f(int a)
{
	int res = ( (long)(ret()) * 2);
	cout << res << endl;
	return res;
}
int main()
{
	int a = 300000;
	cout << f(a) << endl;
	return 0;
}