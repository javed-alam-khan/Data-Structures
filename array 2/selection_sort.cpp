#include<iostream>
using namespace std;
void selection_sort(int *p, int size)
{
	int min_index;
	for(int i=0; i <= size-2; i++)
	{
		min_index = i;
		for(int j=i+1; j <= size-1; j++)
		{
			if(p[j] < p[min_index])
				min_index = j;
		}
		swap(p[i],p[min_index]);
	}
}
int main()
{
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	int *p = new int[size];
	cout<<"Enter the elements"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>p[i];
	}
	selection_sort(p, size);

	for(int i=0; i<size; i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
	return 0;
}