#include<iostream>
using namespace std;
bool comparator(int a, int b)
{
	return a<b;
}
void bubble_sort(int *p, int size, bool (&comparator)(int x, int y))
{
	for(int i=0; i <= size-2; i++)
	{
		for(int j=0; j<= size-i-2; j++)
		{
			if(comparator(p[j],p[j+1]))
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
	bubble_sort(p,size,comparator);
	
	for(int i=0; i<size; i++)	// Printing sorted array
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
	return 0;
}