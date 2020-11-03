#include <iostream>
#include <cstring>
using namespace std;
void print(int arr[], int n)
{
	for(int i=0; i<n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

bool isPermutation(char cArr1[], char cArr2[])
{
	int index;
	int flag[256] = {0};
	// print(flag, 256); 
	int len1 = strlen(cArr1);
	// cout << "len1 " << len1 << endl;
	int len2 = strlen(cArr2);
	// cout << "len2 " << len2 << endl;
	for(int i=0; i<len1; i++)
	{
		index = cArr1[i];
		// cout << "index " << index << endl;
		flag[index] += 1; 
	}
	// print(flag, 256);
	for(int i=0; i<len2; i++)
	{
		index = cArr2[i];
		// cout << "index " << index << endl;
		flag[index] -= 1; 
	}
	// print(flag, 256);
	for(int i=0; i<256; i++)
	{
		if(flag[i] != 0)
			return false;
	}
	return true;
}

int main()
{
	char cArr1[1000];
	char cArr2[1000];
	bool res;
	cin.getline(cArr1, 1000);
	cin.getline(cArr2, 1000);
	res = isPermutation(cArr1, cArr2);
	// cout << "res " << res << endl;
	if(res == 1)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}