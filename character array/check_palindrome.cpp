#include <iostream>
#include <cstring>
using namespace std;
bool checkPalindrome(char cArr[])
{
	int len = strlen(cArr);
	int i = 0;
	int j = len-1;
	while(i<j)
	{
		if(cArr[i] != cArr[j])
			return false;
		i++;
		j--;
	}
	return true;
}
int main()
{
	char cArr[10000];
	cin.getline(cArr, 10000);
	if(checkPalindrome(cArr))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}