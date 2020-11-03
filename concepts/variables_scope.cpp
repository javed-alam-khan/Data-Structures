#include <iostream>
using namespace std;
int main()
{
	int i;
	// CTE
	// int m;
	// int m = 3;
	cin >> i;
	if(i==10)
	{
		int i = 50;
		cout << i << endl;
		int j = 20;
		cout << j << endl;
	}
	else
	{
		int j = 30;
		cout << j << endl;
	}
	cout << i << endl;
	// compile time error
	// cout << j << endl; 

	for(int lv=0; lv<3; lv++)
		cout << lv << " ";
	// CTE
 	// cout << lv << endl;
	cout << endl;

	int lv=0;
	for(; lv<5; lv++)
	{
		cout << lv << " ";
	}
	cout << lv <<endl;
	return 0;
}