#include <iostream>
#include <unordered_map>
using namespace std;

int highestFrequency(int* arr, int size)
{
	int res = 0;
	int resCount = 0;
	unordered_map<int, int> uMap;
	for(int i=0; i<size; i++)
		uMap[arr[i]] += 1;
	for(int i=0; i<uMap.size(); i++)
	{
		if(uMap[arr[i]] > resCount)
		{
			resCount = uMap[arr[i]];
			res = arr[i];
		}
	}
	return res;
}

int main()
{
	int size;
	cout << "Enter size of array" << endl;
	cin >> size;
	int* arr = new int[size];
	if(size > 0)
		cout << "Enter elements" << endl;
	for(int i=0; i<size; i++)
		cin >> arr[i];
	cout << highestFrequency(arr, size) << endl;
	return 0;
}