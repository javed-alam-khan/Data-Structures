#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char cArr[])
{
	int i = 0;
	while(i < strlen(cArr))
	{
		if(cArr[i] == ' ')
		{
			for(int j = i; j < strlen(cArr); j++)
				cArr[j] = cArr[j+1];
		}
		else
			i++;
	}
}

int main()
{
	char cArr[1000000];
	cin.getline(cArr, 1000000);
	trimSpaces(cArr);
	cout << cArr << endl;
	return 0;
}