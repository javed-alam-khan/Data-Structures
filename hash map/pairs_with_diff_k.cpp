#include <iostream>
#include <unordered_map>
using namespace std;

void printPairs(int* arr, int size, int k)
{
	unordered_map<int, int> uMap;
	for(int i=0; i<size; i++)
		uMap[arr[i]] += 1;

	for(int i=0; i<size; i++)
	{
        if(k==0)
		{
            if(uMap.count(arr[i]) == 1)
            {
             	int lc = ((uMap[arr[i]])*(uMap[arr[i]]-1))/2;
				for(int j=0; j<lc; j++)
					cout << arr[i] << " " << arr[i] << endl;
				uMap.erase(arr[i]);
                continue;   
            }
		}
        
		if(uMap.count(arr[i]+k) == 1)
		{
			int store = arr[i]+k;
			int minVal = min(arr[i], store);
			int maxVal = max(arr[i], store);
			for(int j=0; j < uMap[arr[i]]*uMap[store]; j++)
				cout << minVal << " " << maxVal << endl;
		}

		if(uMap.count(arr[i]-k) == 1)
		{ 
			int store = arr[i]-k;
			int minVal = min(arr[i], store);
			int maxVal = max(arr[i], store);
			for(int j=0; j < uMap[arr[i]]*uMap[store]; j++)
				cout << minVal << " " << maxVal << endl;
		}
		
		if(uMap.count(arr[i]) == 1)
			uMap.erase(arr[i]);
	}
}

int main()
{
	int size;
	int k;
	cout << "Enter size " << endl;
	cin >> size;

	if(size > 0)
		cout << "Enter elems" << endl;
	int* arr = new int[size];
	for(int i=0; i<size; i++)
		cin >> arr[i];

	cout << "Enter k" << endl;
	cin >> k;
	printPairs(arr, size, k);
	return 0;
}