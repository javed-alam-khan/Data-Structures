#include<iostream>
using namespace std;
void merge(int *array1, int* array2, int size1, int size2)
{

	int i = 0;
	int j = 0;
	int k = 0;
	int *array3 = new int[size1 + size2];
	while(i<size1 && j<size2)
	{
		if(array1[i] <= array2[j])
			array3[k++] = array1[i++];
		else
			array3[k++] = array2[j++];
	}
	while(i<size1)
		array3[k++] = array1[i++];
	while(j<size2)
		array3[k++] = array2[j++];
	
	for(int lv=0; lv<(size1+size2); lv++)
	{
		array1[lv] = array3[lv];
	}


}

void helper(int *array, int start, int end)
{
	int size;
	int mid;
	size = end-start+1;

	if(size == 0 || size == 1)
		return;

	mid = (start + end)/2;
	helper(array, start, mid);
	helper(array, mid+1, end);
	merge(&array[start], &array[mid+1], mid-start+1, end-mid);
	
}

void mergeSort(int *array, int size)
{
	int start = 0;
	int end = size-1;
	helper(array, start, end);
}

int DuplicateNumber(int *array, int size)
{
	mergeSort(array, size);
	for(int lv=0; lv<size-1; lv++)
	{
		if(array[lv] == array[lv+1])
			return array[lv];
		// cout<<array[lv]<<" ";
	}
	// cout<<endl;
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