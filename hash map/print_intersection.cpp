#include <iostream>
#include <unordered_map>
using namespace std;

void intersection(int* arr1, int* arr2, int size1, int size2)
{
	unordered_map<int, int> uMap;
	for(int i=0; i<size1; i++)
		uMap[arr1[i]] += 1;
	for(int i=0; i<size2; i++)
	{
		if(uMap.count(arr2[i]) == 1)
		{
			cout << arr2[i] << endl;
			uMap[arr2[i]] -= 1;
			if(uMap[arr2[i]] == 0)
				uMap.erase(arr2[i]);
		}
	} 
}

int main()
{
	int size1;
	int size2;
	cout << "Enter size1" << endl;
	cin >> size1;
	int* arr1 = new int[size1];
	cout << "Enter arr1 elems" << endl;
	for(int i=0; i<size1; i++)
		cin >> arr1[i];

	cout << "Enter size2" << endl;
	cin >> size2;
	int* arr2 = new int[size2];
	cout << "Enter arr2 elems" << endl;
	for(int i=0; i<size2; i++)
		cin >> arr2[i];

	intersection(arr1, arr2, size1, size2);
	return 0;
}