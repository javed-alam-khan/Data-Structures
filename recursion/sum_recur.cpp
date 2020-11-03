#include<iostream>
using namespace std;
int recur_sum(int *array, int size)
{
	int small_res = 0;
	if(size == 0)
		return 0;
	if(size == 1)
		return array[0];
	small_res = recur_sum(array+1, size-1);
	return array[0] + small_res;
}
int main()
{
	int size;
	int res;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	int *array = new int[size];
	cout<<"Enter elements"<<endl;
	for(int i=0; i<size; i++)
		cin>>array[i];
	res = recur_sum(array,size);
	cout<<"sum = "<<res<<endl;
	return 0;
}