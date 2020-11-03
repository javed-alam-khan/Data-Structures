#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char cArr[100];
	cin >> cArr;
	for(int i=0; cArr[i] != '\0'; i++)
	{
		for(int j=0; j<=i; j++)
			cout << cArr[j];
		cout << endl;
	}
	return 0;
}