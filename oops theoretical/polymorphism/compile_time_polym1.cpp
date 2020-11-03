#include <iostream>
using namespace std;
int test()
{
	return 0;
}
int test(int a)
{
	return 1;
}
int test(int a, int b)
{
	return 2;
}
// void test()
// {
// 	cout << "empty" << endl;
// }

int main()
{
	cout << test() << endl;
	cout << test(10) << endl;
	cout << test(50, 55) << endl;
	return 0;
}