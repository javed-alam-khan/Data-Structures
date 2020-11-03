#include<iostream>
using namespace std;
int first_index(int * array, int size, int key)
{
	int small_res;
	if(size == 0)	// Base case
		return -1;
	if(array[0] == key)
		return 0;
	small_res = first_index(array+1, size-1, key);	// Recusrive case
	if(small_res == -1)
		return -1;
	else
		return small_res + 1;
}
int main()
{
	int size;
	int key;
	int res;
	cout<<"Enter size"<<endl;
	cin>>size;
	if(size>0)
	{
		int *array = new int[size];		// Creation of array dynamically 
		cout<<"Enter array elements"<<endl;
		for(int i=0; i<size; i++)
			cin>>array[i];
		cout<<"Enter key"<<endl;
		cin>>key;
		
		res = first_index(array, size, key);	// calling first_index function
		if(res == -1)
			cout<<"Not found"<<endl;
		else
			cout<<"First index = "<<res<<endl;
	}
	return 0;
}