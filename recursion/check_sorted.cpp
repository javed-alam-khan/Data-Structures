#include<iostream>
using namespace std;
bool is_sorted(int *array, int size)
{
	if(size==0 || size==1)
		return true;
	if(array[0] > array[1])
		return false;
	return is_sorted(array+1, size-1);
}
int main()
{
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int *array = new int[size];
	cout<<"Enter elements"<<endl;
	for(int i=0; i<size; i++)
		cin>>array[i];
	if(is_sorted(array, size))
		cout<<"Sorted"<<endl;
	else
		cout<<"Not sorted"<<endl;
	return 0;
}