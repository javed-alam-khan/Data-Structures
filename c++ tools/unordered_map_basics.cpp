#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int arr[] = {30, 20, 50, 10, 95, 20};
	unordered_map<int, int> ump;
	unordered_map<int, int> :: iterator itr;
	for(itr = ump.begin(); itr != ump.end(); itr++)
	{
		cout << itr->first << " " << itr->second << endl;
	}
	for(int i = 0; i < 6; i++)
	{
		ump[arr[i]] = ump[arr[i]] + 1;
	}
	for(itr = ump.begin(); itr != ump.end(); itr++)
	{
		cout << itr->first << " " << itr->second << endl;
	}
	ump.erase(20);
	cout << endl;
	for(itr = ump.begin(); itr != ump.end(); itr++)
	{
		cout << itr->first << " " << itr->second << endl;
	}
	return 0;
}