#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

char* uniqueChar(char input[])
{
	unordered_map<char, bool> uMap;
	char* res = new char[1000000];
	int j = 0;
	for(int i = 0; input[i] != '\0'; i++)
	{
		if(uMap.count(input[i]) == 0)
		{
			uMap[input[i]] = true;
			res[j] = input[i];
			j++;
		}
	}

	return res;
}

int main()
{
	char input[1000000];
	cin >> input;
	cout << uniqueChar(input) << endl;
	return 0;
}