#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> removeDuplicates(int* arr, int size)
{
	vector<int> res;
	unordered_map<int, bool> uMap;
	for(int i=0; i<size; i++)
	{
		if(uMap.count(arr[i]) == 0)
		{
			uMap[arr[i]] = true;
			res.push_back(arr[i]);
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
	cout << "Enter elements" << endl;
	for(int i=0; i<size; i++)
		cin >> arr[i];
	vector<int> res = removeDuplicates(arr, size);
	for(int i=0; i<res.size(); i++)
		cout << res[i] << " " ;
	cout << endl;	
}