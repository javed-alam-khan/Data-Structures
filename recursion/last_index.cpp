#include<iostream>
using namespace std;
int lastIndex(int *array, int size, int key)
{
	int small_res;
	if(size == 0)// Base case
		return -1;
	small_res = lastIndex(array+1, size-1, key);// Recursive case
	if(small_res == -1)
	{
		if(array[0] == key)
			return 0;
		else
			return -1;
	}
	return small_res + 1;
}
int main()
{
	int size;
	int key;
	cout<<"Enter size"<<endl;
	cin>>size;
	
	if(size>0)
	{
		int res;
		int *array = new int[size];		// Creation of array dynamically
		cout<<"Enter elements"<<endl;
		for(int i=0; i<size; i++)
			cin>>array[i];

		cout<<"Enter key"<<endl;
		cin>>key;
		res = lastIndex(array, size, key);
		if(res == -1)
			cout<<"Not Found"<<endl;
		else
			cout<<"Last index = "<<res<<endl;
		delete [] array;	
	}
	return 0;
}