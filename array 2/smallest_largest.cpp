#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int array[1000];
	int size;
	int largest = INT_MIN;
	int smallest = INT_MAX;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	cout<<"Enter the array elements"<<endl;
	for(int i=0; i<size; i++)
		cin>>array[i];

	for(int i=0; i<size; i++)
	{
		if(array[i] > largest)
			largest = array[i];

		if(array[i] < smallest)
			smallest = array[i];
	}

	cout<<"largest element = "<<largest<<endl;
	cout<<"smallest element = "<<smallest<<endl;

	return 0;
}