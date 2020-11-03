#include<iostream>
using namespace std;
void merge(int *arr1, int *arr2, int size1, int size2)
{
	int *tmp = new int[size1+size2];
	int i = 0;
	int j = 0;
	int k = 0;
	while(i<size1 && j<size2)
	{
		if(arr1[i] <= arr2[j])
			tmp[k++] = arr1[i++];
		else
			tmp[k++] = arr2[j++];
	}
	for( ; i<size1 ; )
		tmp[k++] = arr1[i++];
	for( ; j<size2 ; )
		tmp[k++] = arr2[j++];

	for(int lv=0; lv<size1+size2; lv++)
		arr1[lv] = tmp[lv];
}
void mergeSort(int *arr, int start, int end)
{
	if(end-start+1 == 0 || end-start+1 == 1)
		return;
	int mid = (start + end)/2;
	int size1;
	int size2;
	mergeSort(arr, start, mid);
	mergeSort(arr, mid+1, end);
	size1 = mid - start + 1;
	size2 = end - mid;
	merge(&arr[start], &arr[mid+1], size1, size2);
}
int FindUnique(int arr[], int size)
{
	if(size == 0)
		return 0;
	int start = 0;
	int end = size-1;
	mergeSort(arr, start, end);
	// for(int i=0; i<size; i++)
	// 	cout<<arr[i]<<" ";
	// cout<<endl;
	int i;
	for(i=0; i<size-1; i+=2)
	{
		if(arr[i] != arr[i+1])
			return arr[i];
	}
	return arr[i];
}
int main()
{
	int n;
	cin>>n;
	int *input = new int[n];
	for(int lv=0; lv<n; lv++)
		cin>>input[lv];
	cout<<FindUnique(input, n)<<endl;
	return 0;
}