#include<iostream>
using namespace std;
int *merge(int *array1, int* array2, int size1, int size2)
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
	return array3;
}
int main()
{
	int size1;
	int size2;
	cout<<"Enter size1"<<"\n";
	cin>>size1;
	cout<<"Enter size2"<<"\n";
	cin>>size2;
	int *array1 = new int[size1];
	int *array2 = new int[size2];
	if(size1>0)
	{
		cout<<"Enter elements into array1\n";
		for(int i=0; i<size1; i++)
		cin>>array1[i];
	}
	if(size2>0)
	{
		cout<<"Enter elements into array2\n";
		for(int i=0; i<size2; i++)
		cin>>array2[i];
	}
	
	int *array3 = merge(array1, array2, size1, size2);
	cout<<"merged array\n";
	for(int i=0; i<(size1+size2);i++)
	{
		cout<<array3[i]<<" ";
	}
	cout<<endl;
	delete[] array1;
	delete[] array2;
	delete[] array3;
	return 0;
}