#include<iostream>
using namespace std;
void bubble_sort(int *p, int size)
{
	for(int i=0; i <= size-2; i++)
	{
		for(int j=0; j<= size-i-2; j++)
		{
			if(p[j] > p[j+1])
				swap(p[j],p[j+1]);
		}
	}

}
int main()
{
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	int *p = new int[size];
	cout<<"Enter the elements in array"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>p[i];
	}
	bubble_sort(p,size);
	// Printing the sorted array elements
	for(int i=0; i<size; i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
	return 0;
}