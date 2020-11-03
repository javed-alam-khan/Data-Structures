#include <iostream>
using namespace std;
int length(char cArr[])
{
	int c = 0;
	for(int i=0; cArr[i]!='\0'; i++)
		c++;
	return c;
}

int main()
{
	char cArr[100];
	cin.getline(cArr, 50, 'a');
	cout << cArr << endl;
	cout << length(cArr) << endl;
	return 0;
}