#include <iostream>
#include <map>
using namespace std;
int main()
{
	int arr[] = {10, 30, 50, 20, 30};
	map<int, int> mp;
	map<int, int> :: iterator itr;
	// for(itr = mp.begin(); itr != mp.end(); itr++)
	// 	cout << itr->second << endl;
	for(int i = 0; i < 5; i++)
	{
		mp[arr[i]] = mp[arr[i]] + 1;
	}
	for(itr = mp.begin(); itr != mp.end(); itr++)
		cout << itr->first << " " << itr->second << endl;
	mp.erase(30);
	cout << endl;
	for(itr = mp.begin(); itr != mp.end(); itr++)
		cout << itr->first << " " << itr->second << endl;
	return 0;
}