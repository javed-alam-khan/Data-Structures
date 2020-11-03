#include<iostream>
using namespace std;
bool find(int *array, int key, int size)
{
	if(size == 0)
		return false;
	if(array[0] == key)
		return true;
	return find(array+1, key, size-1);
}
int main()
{
	int size;
	int key;
	cout<<"Enter size"<<endl;
	cin>>size;
	int *array = new int[size];
	if(size>0)
	{
		cout<<"Enter elements"<<endl;
		for(int i=0; i<size; i++)
		{
			cin>>array[i];
		}
		cout<<"Enter key to be searched"<<endl;
		cin>>key;
		if(find(array, key, size))
			cout<<"found"<<endl;
		else
			cout<<"not found"<<endl;
	}
	return 0;
}