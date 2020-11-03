#include <iostream>
#include <climits>
using namespace std;
void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

char highestOccurringChar(char cArr[])
{

	char res;
	int index;
	int count = 0;
	int freq[26] = {0};
	for(int i=0; cArr[i] != '\0'; i++)
	{
		index = cArr[i];
		freq[index-97] += 1; 
	}
	// print(freq, 26);
	for(int i=0; cArr[i] != '\0'; i++)
	{ 
		index = cArr[i];
		if(freq[index-97] > count)
		{
			count = freq[index-97];
			res = cArr[i];
		}
	}
	return res;
}

int main()
{
	char cArr[1000];
	cin.getline(cArr, 1000);
	cout << highestOccurringChar(cArr) << endl;
	return 0;
}