#include <iostream>
#include <cmath>
using namespace std;
bool check(int num, int i)
{
	int z = num & (int)pow(2, i);
	if(z == 0)
		return false;
	else
		return true;
}
int main()
{
	int num;
	int i;
	cin >> num;
	cin >> i;
	if(check(num, i))
		cout << "Set" << endl;
	else
		cout << "Not Set" << endl;
	return 0;
}