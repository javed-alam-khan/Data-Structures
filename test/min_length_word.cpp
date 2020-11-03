#include <iostream>
#include <cstring>
#include <climits>
using namespace std;
void minLengthWord(char cArr[], char output[])
{
	int len = strlen(cArr);
	int left = 0;
	int minLen = INT_MAX;
	int i = 0; 
	while(i < len)
	{
		cout << "i " << i << " " << "cArr[i] " << cArr[i] << endl;
		if(cArr[i] == ' ')
		{
			cout << "inside first if" << endl;
			cArr[i] = '\0';
			if(minLen > strlen(&cArr[left]))
			{
				cout << "inside second if" << endl;
				minLen = strlen(&cArr[left]);
				output = &cArr[left];
			}	
			i++;
			left = i;
		}

		else
			i++;
	}

	if(minLen > strlen(&cArr[left]))
	{
		minLen = strlen(&cArr[left]);
		output = &cArr[left];
	}
	
	cout << "minLen " << minLen << endl;
	cout << "output " << output << endl;
}
int main()
{
	char cArr[100000];
	char output[100000];
	cin.getline(cArr, 100000);
	minLengthWord(cArr, output);
	cout << output << endl;
	return 0;
}