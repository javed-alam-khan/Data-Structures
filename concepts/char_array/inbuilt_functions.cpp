#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char cArr1[100];
	char cArr2[50];
	cin.getline(cArr1, 30);
	cin.getline(cArr2, 20);
	// cin >> cArr1;
	// cin >> cArr2;
	strncpy(cArr1, cArr2, 4);
	cout << cArr1 << endl;
	cout << cArr2 << endl;
	return 0;
}