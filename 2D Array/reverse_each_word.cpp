#include <iostream>
#include <cstring>
using namespace std;
void reversal(char cArr[])
{
	int len = strlen(cArr);
	int l = 0;
	int r = len-1;
	while(l<r)
	{
		char temp;
		temp = cArr[l];
		cArr[l] = cArr[r];
		cArr[r] = temp;
		l++;
		r--;
	}
}
void reverseEachWord(char cArr[])
{
	int i = 0;
	int left = i;
	while(cArr[i] != '\0')
	{
		if(cArr[i]==' ')
		{
			cArr[i] = '\0';
			reversal(&cArr[left]);
			cArr[i] = ' ';
			i++;
			left = i;
		}
		else
			i++;
	}
	reversal(&cArr[left]);
}
int main()
{
	char cArr[1000];
	cin.getline(cArr, 1000);
	reverseEachWord(cArr);
	cout << cArr << endl;
	return 0;
}