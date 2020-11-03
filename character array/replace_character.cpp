#include <iostream>
using namespace std;
void replaceCharacter(char cArr[], char a, char b)
{
	for(int i = 0; cArr[i] != '\0'; i++)
	{
		if(cArr[i] == a)
			cArr[i] = b;
	}
}
int main()
{
	char cArr[1000000];
	char a;
	char b;
	cin >> cArr;
	cin >> a;
	cin >> b;
	replaceCharacter(cArr, a, b);
	cout << cArr << endl;
	return 0;
}