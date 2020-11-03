#include<iostream>
using namespace std;
void insertion_sort(int *p, int size)
{
	for(int i=1; i <= size-1; i++)
	{
		int elem = p[i];
		int j = i-1;
		while(j>=0 && p[j]>elem)
		{
			p[j+1] = p[j];
			j--;
		}
		p[j+1] = elem;
	}
}
int main()
{
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	int *p = new int[size];
	cout<<"Enter the elements"<<endl;
	for(int i=0; i <= size-1; i++)
		cin>>p[i];
	insertion_sort(p,size);
	for(int i=0; i <= size-1; i++)
		cout<<p[i]<<" ";
	cout<<endl;
	return 0;
}