#include<iostream>
using namespace std;

int allIndices(int *array, int size, int key, int *output)
{
	int small_size;
	if(size == 0)
		return 0;
	small_size = allIndices(array, size-1, key, output);
	if(array[size-1] == key)
	{
		output[small_size] = size-1; 
		small_size += 1;
	}
	return small_size;
}

int main()
{
	int size;
	int key;
	cout<<"Enter size"<<endl;
	cin>>size;
	
	int *array = new int[size];
	cout<<"Enter elements"<<endl;
	for(int i=0; i<size; i++)
		cin>>array[i];
	cout<<"Enter key"<<endl;
	cin>>key;
	int *output = new int[size];
	int op_size = allIndices(array, size, key, output);
	cout<<"[ ";
	for(int i=0; i<op_size; i++)
		cout<<output[i]<<" ";
	cout<<"]"<<endl;
	cout<<"op_size = "<<op_size<<endl;

	return 0;
}