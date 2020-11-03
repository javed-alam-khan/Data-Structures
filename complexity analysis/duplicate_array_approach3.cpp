#include<iostream>
using namespace std;

int DuplicateNumber(int *array, int size)
{
	int array_sum = 0;
	int n_minus2_sum;
	for(int i=0; i<size; i++)
	{ 
		array_sum += array[i];
	}
	n_minus2_sum = ((size-2)*(size-1))/2;
	return array_sum - n_minus2_sum;
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