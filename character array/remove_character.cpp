#include <iostream>
using namespace std;
void removeAllOccurrencesOfChar(char cArr[], char c)
{
	int index = 0;
	for(int lv = 0; cArr[lv] != '\0'; lv++)
	{
		if(cArr[lv] != c)
		{
			cArr[index] = cArr[lv];
			index++;
		}
	}
	cArr[index] = '\0';
}

int main()
{
	char cArr[1000];
	char c;
	cin.getline(cArr, 1000);
	cin >> c;
	removeAllOccurrencesOfChar(cArr, c);
	cout << cArr << endl;
	return 0;
}
