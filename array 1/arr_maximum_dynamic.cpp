#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int size;
	int largest = INT_MIN;
	int smallest = INT_MAX;
	
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	int *array = new int[size];
	cout<<"Enter the elements"<<endl;
	for(int i=0; i <= size-1; i++)
	{
		cin>>array[i];
	}
	
	for(int i=0; i <= size-1; i++)
	{
		largest = max(array[i],largest);
		smallest = min(array[i],smallest);
	}

	cout<<"largest element = "<<largest<<endl;
	cout<<"smallest element = "<<smallest<<endl;
}