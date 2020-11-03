#include<iostream>
using namespace std;
int binary_search(int * array, int size,int key)
{
	int start = 0;
	int end = size-1;
	int mid;
	while(start <= end)
	{
		mid = (start+end)/2;
		if(array[mid] == key)
			return mid;
		else if(array[mid] > key)
			end = mid-1;
		else
			start = mid+1;
	}
	return -1;
}
int main()
{
	int array[1000];
	int size;
	int key;
	int index;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	cout<<"Enter the sorted elements "<<endl;
	for(int i=0; i<size; i++)
		cin>>array[i];
	cout<<"Enter the element to be searched"<<endl;
	cin>>key;
	index = binary_search(array,size,key);

	if(index == -1)
		cout<<"Not found"<<endl;
	else
		cout<<"Found at index "<<index<<endl;
	return 0;
}