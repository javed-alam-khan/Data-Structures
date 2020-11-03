#include<iostream>
using namespace std;

int DuplicateNumber(int *array, int size)
{
	for(int i=0; i<size; i++)
	{
		for(int j=i+1; j<size; j++)
		{
			if(array[i] == array[j])
				return array[i];
		}
	}
}
int main()
{
	int size;
	cin>>size;

	//dynamic array
	int *input = new int[size+1];
	for(int lv=0; lv<size; lv++)
		cin>>input[lv];

	//duplicate number display
	cout<<DuplicateNumber(input, size)<<endl;

	//deletion of dynamic allocated space
	delete[] input;

	return 0;
}