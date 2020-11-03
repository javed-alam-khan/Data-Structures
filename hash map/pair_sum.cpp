#include <iostream>
#include <unordered_map>
using namespace std;

void pairSum(int*arr, int size)
{
	unordered_map<int, int> uMap;
	for(int i=0; i<size; i++)
		uMap[arr[i]] += 1;
	for(int i=0; i<size; i++)
	{
		if(arr[i] == 0)
		{
			int v = uMap[arr[i]];
			for(int i=0; i < (v*(v-1))/2 ; i++)
				cout << "0" << " " <<"0" << endl;
			uMap.erase(arr[i]);
		}
		else
		{
			int tmp = -arr[i];
			if(uMap.count(tmp) == 1)
			{
				for(int j=0; j < uMap[arr[i]]*uMap[tmp]; j++)
				{
					if(tmp < arr[i])
						cout << tmp << " " << arr[i] << endl;
					else
						cout << arr[i] << " " << tmp << endl;
				}
				uMap.erase(arr[i]);
				uMap.erase(tmp);
			}
		}
	}
}

int main()
{
	int size;
	cout << "Enter size" << endl;
	cin >> size;
	cout << "Enter array elems" << endl;
	int* arr = new int[size];	
	for(int i=0; i<size; i++)
		cin >> arr[i];
	pairSum(arr, size);
	return 0;
}