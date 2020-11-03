#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfLongestSubsetWithZeroSum(int* arr, int size)
{
	int sum = 0;
	unordered_map <int, int> uMap;
	int resLen = 0;
	for(int i=0; i<size; i++)
	{
		sum += arr[i];
		if(uMap.count(sum) == 1)
		{
			if(resLen < i-uMap[sum])
				resLen = i-uMap[sum];
		}
		else if(sum == 0)
			resLen = i+1;
		else
			uMap[sum] = i;
	}
	return resLen;
}

int main()
{
	int size;
	cout << "Enter size" << endl;
	cin >> size;
	int* arr = new int[size];
	if(size > 0)
		cout << "Enter elems" << endl;
	for(int i=0; i<size; i++)
		cin >> arr[i];
	cout << lengthOfLongestSubsetWithZeroSum(arr, size) << endl;
	return 0;
}