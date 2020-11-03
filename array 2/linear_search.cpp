#include<iostream>
using namespace std;
int linear_search(int * array,int size,int key)
{
	int i;
	for(i=0; i<=size-1; i++)
		if(array[i]==key)
			return i;
	if(i==size)
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
	cout<<"Enter the elements in array"<<endl;
	for(int i=0; i<=size-1; i++)
	{
		cin>>array[i];
	}
	cout<<"Enter the element to be searched"<<endl;
	cin>>key;

	index = linear_search(array,size,key);
	if(index == -1)
		cout<<"not found"<<endl;
	else
		cout<<"found at "<<index<<endl;

	return 0;
}