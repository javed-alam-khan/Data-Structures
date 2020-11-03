#include<iostream>
using namespace std;

void merge(int *array1, int* array2, int size1, int size2)
{
	cout<<"inside merge\n";
	cout<<"array1 elements\t";
	for(int i=0; i<size1; i++)
		cout<<array1[i]<<" ";
	cout<<endl;

	cout<<"array2 elements\t";
	for(int i=0; i<size2; i++)
		cout<<array2[i]<<" ";
	cout<<endl;

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

	cout<<"array3 elements\t";
	for(int i=0; i<(size1 + size2); i++)
		cout<<array3[i]<<" ";
	cout<<endl;
	
	for(int lv=0; lv<(size1+size2); lv++)
	{
		array1[lv] = array3[lv];
	}


	cout<<"array1 elements\t";
	for(int i=0; i<(size1 + size2); i++)
		cout<<array1[i]<<" ";
	cout<<endl;
}

void helper(int *array, int start, int end)
{
	cout<<"inside helper\n";
	int size;
	int mid;
	size = end-start+1;

	cout<<"array elements\t";
	for(int i=0; i<size; i++)
		cout<<array[i]<<" ";
	cout<<endl;

	cout<<"size "<<size<<endl;
	if(size == 0 || size == 1)
		return;

	cout<<"start "<<start<<endl;
	cout<<"end "<<end<<endl;
	mid = (start + end)/2;
	cout<<"mid "<<mid<<endl;
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

int main()
{
	int size;
	cout<<"Enter size\n";
	cin>>size;
	if(size < 0)
	{
		cout<<"invalid array size\n";
		return 0;
	}
	int *array = new int[size];
	if(size > 0)
	{
		cout<<"Enter elements in array\n";		
	}
	for(int i=0; i<size; i++)
	{
		cin>>array[i];
	}	
	mergeSort(array, size);
	cout<<"inside main"<<endl;
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}		
	cout<<"\n";
	return 0;
}