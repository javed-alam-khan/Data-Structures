#include<iostream>
using namespace std;
bool checkMember(int n)
{
	if(n == 0)
		return true;
	int a = 0;
	int b = 1;
	int c = a + b;
	while(c < n)
	{
		a = b;
		b = c;
		c = a + b;
	}
	if(c == n)
		return true;
	else
		return false;

}
int main()
{
	int n;
	cin >> n;
	if(checkMember(n))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}