#include<iostream>
using namespace std;
int helper(int *array, int start, int end, int key)
{
	if(start<=end)
	{
		int mid;
		mid = (start+end)/2;
		if(array[mid] == key)
			return mid;
		else if(array[mid] < key)
		{
			start = mid+1;
			helper(array, start, end, key);
		}
		else
		{
			end = mid-1;
			helper(array, start, end, key);
		}
	}
	else
		return -1;
}
int binarySearch(int *array, int size, int key)
{
	return helper(array, 0, size-1, key);
}
int main()
{
	int array[1000];
	int size;
	int key;
	int index;
	cout<<"Enter the size\n";
	cin>>size;
	cout<<"Enter the elements in increasing order\n";
	for(int i=0; i<size; i++)
		cin>>array[i];
	cout<<"Enter the key\n";
	cin>>key;
	index = binarySearch(array, size, key);
	cout<<"index : "<<index<<endl;
	return 0;
}