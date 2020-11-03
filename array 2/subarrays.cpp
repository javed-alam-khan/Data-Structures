#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter size"<<endl;
	cin>>size;
	int *array = new int[size];
	cout<<"Enter elements"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>array[i];
	}
	cout<<"Sub-arrays are"<<endl;
	for(int i=0; i<size; i++)
	{
		for(int j=i; j<size; j++)
		{
			cout<<"[ ";
			for(int k=i; k<=j; k++)
			{
				cout<<array[k]<<" ";
			}
			cout<<"]"<<endl;
		}
	}
 return 0;
}
