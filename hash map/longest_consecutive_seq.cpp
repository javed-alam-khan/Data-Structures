#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> longestConsecutiveIncreasingSequence(int* arr, int size)
{
	int start = -1;
	int maxCount = 0;
	unordered_map<int, bool> uMap1;
	for(int i=0; i<size; i++)
	{
		if(uMap1.count(arr[i])==0)
        	uMap1[arr[i]] = true;
		
	}

	unordered_map<int, int> uMap2;
	for(int i=0; i<size; i++)
	{
		if(uMap2.count(arr[i])==0) 
        	uMap2[arr[i]] = i;
	}
	for(int i=0; i<size; i++)
	{
		int curr = arr[i];
        if(uMap1[curr] == false)
            continue;
		int count = 0;
		for(int j=curr; uMap1.count(j)==1; j++)
		{
			uMap1[j] = false;
			count++;
		}
		for(int j=curr-1; uMap1.count(j)==1; j--)
		{
			uMap1[j] = false;
			count++;
			curr = j;
		}

		if(count > maxCount)
		{
			maxCount = count;
			start = curr;
		}
		else if(count == maxCount)
		{
			int index1 = uMap2[curr];
			int index2 = uMap2[start];
			
			if(index1 < index2)
			{
				start = curr;
			}
		}
	}
	vector<int> res;
	for(int i=0; i<maxCount; i++)
	{
		res.push_back(start);
		start++;
	}
	return res;
}


int main()
{
	int size;
	cin >> size;
	int* arr = new int[size];
	for(int i=0; i<size; i++)
		cin >> arr[i];
	vector<int> res = longestConsecutiveIncreasingSequence(arr, size);
	for(int i=0; i<res.size(); i++)
		cout << res[i] << " ";
	cout << endl;
	return 0;
}
