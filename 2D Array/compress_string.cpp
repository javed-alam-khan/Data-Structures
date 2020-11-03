#include <iostream>
#include <cstring>
using namespace std;
void stringCompression(char cArr[])
{
	int len = strlen(cArr);
	int i = 0;
	int index = 0;
	int count = 1;
	for(int j = i+1; j<len; j++)
	{
		if(cArr[i] == cArr[j])
			count++;
		else
		{
			if(count > 1)
			{
				cArr[index++] = cArr[i];
				cArr[index++] = '0' + count;
				count = 1;
			}
			else
			{
				cArr[index++] = cArr[i];
			}
		}
		i++;
	}
	if(count > 1)
	{
		cArr[index++] = cArr[i];
		cArr[index++] = '0' + count;
		cArr[index] = '\0';
	}
	else
	{
		cArr[index++] = cArr[i];
		cArr[index] = '\0';
	}
	
}
int main()
{
	char cArr[1000];
	cin.getline(cArr, 1000);
	stringCompression(cArr);
	cout << cArr << endl;
	return 0;
}