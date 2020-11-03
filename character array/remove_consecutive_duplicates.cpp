#include <iostream>
#include <cstring>
using namespace std;
// void print(char cArr[])
// {
// 	cout << strlen(cArr) << endl;
// 	for(int i=0; cArr[i]!='\0'; i++)
// 		cout << cArr[i] << "";
// 	cout << endl;
// }

void removeConsecutiveDuplicates(char cArr[])
{
	int i = 0;
	int j = i + 1;
	while(i < strlen(cArr)-1)
	{
		if(cArr[i] == cArr[j])
		{
			for(int k=j; k<strlen(cArr); k++)
				cArr[k] = cArr[k+1];
		}
		else
		{
			i++;
			j++;
		}
	}
}

int main()
{
	char cArr[1000];
	cin.getline(cArr, 1000);
	removeConsecutiveDuplicates(cArr);
	// print(cArr);
	cout << cArr << endl;
	return 0;
}