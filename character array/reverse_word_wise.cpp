#include <iostream>
#include <cstring>
using namespace std;

void print(char cArr[])
{
	for(int i = 0; cArr[i] != '\0'; i++)
		cout << cArr[i] ;
	cout << endl;
}

void reverse(char cArr[])
{
	int len = strlen(cArr);
	int left = 0;
	int right = len-1;
	while(left < right)
	{
		char tmp = cArr[left];
		cArr[left] = cArr[right];
		cArr[right] = tmp;
		left++;
		right--;
	}
}

void reverseStringWordWise(char cArr[]) 
{
	int i;
	int start;
	reverse(cArr);
	i = 0;
	start = i;
	while(cArr[i] != '\0')
	{
		if(cArr[i] == ' ')
		{
			cArr[i] = '\0';
			reverse(&cArr[start]);
			cArr[i] = ' ';
			i++;
			start = i;
		}
		else
			i++;
	}
	reverse(&cArr[start]);
}

int main()
{
	char cArr[1000];
	cin.getline(cArr, 10000000);
	reverseStringWordWise(cArr);
	print(cArr);
	return 0;
}