#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int partition(int* input, int start, int end)
{
	int pivot;
	int count = 0;
	int i;
	int j;
	int tmp;
	pivot = input[start];
	for(i=start+1; i<=end; i++)
	{
		if(input[i] <= pivot)
		{
			count++;
		}
	}
	swap(&input[start],&input[start+count]);
	i = start;
	j = end;
	while(i < (start+count) && j > (start+count))
	{
		if(input[i] <= pivot)
		{	
			i++;
		}
		else if(input[j] > pivot)
		{
			j--;
		}
		else
		{
			swap(&input[i],&input[j]);
            i++;
			j--;
		}
	}

	return start+count;
}
void helper(int* input, int start, int end)
{
	// cout<<"Inside helper\n";
	int index;
	if(end-start+1==0 || end-start+1==1)
		return;
	index = partition(input, start, end);
	helper(input, start, index-1);
	helper(input, index+1, end);

}
void quickSort(int* input,int size)
{
	int start = 0;
	int end = size-1;
	helper(input, start, end);
}
int main()
{
	int size;
	cout<<"Enter size here\n";
	cin>>size;
	if(size < 0)
	{
		cout<<"invalid array size\n";
		return 0;
	}
	int* input = new int[size];

	if(size > 0)
		cout<<"Enter elements\n";
	for(int i=0; i<size; i++)
	{
		cin>>input[i];
	}
	//Calling quickSort function
	quickSort(input, size);
	//Printing sorted array
	for(int i=0; i<size; i++)
	{
		cout<<input[i]<<" ";
	}	
	cout<<"\n";
		
	delete[] input;
	return 0;
}