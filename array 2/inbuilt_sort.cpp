#include<iostream>
#include<algorithm>
using namespace std;

bool comp(int x, int y)
{
	cout<<x<<" and "<<y<<endl;
	cout<<(x>y)<<endl;
	return x<y;
}
int main()
{
	int size;
	cout<<"Enter size"<<endl;
	cin>>size;
	int *array = new int[size];		//Creating an array dynamically
	if(size>0)
	{
		cout<<"Enter elements"<<endl;
		for(int i=0; i<size; i++)
		{
			cin>>array[i];
		}
		cout<<"Before inbuild sort"<<endl;
		for(int i=0; i<size; i++)		//Printing array elements
		{
			cout<<array[i]<<" ";
		}
		cout<<endl;
		sort(array, array+size, comp);		//In-build sort
		cout<<"After inbuild sort"<<endl;
		for(int i=0; i<size; i++)		//Printing array elements
		{
			cout<<array[i]<<" ";
		}		
		cout<<endl;
	}

	return 0;
}