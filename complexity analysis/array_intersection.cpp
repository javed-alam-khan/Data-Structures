#include<iostream>
using namespace std;

void merge(int *inp1, int *inp2, int z1, int z2)
{
	int i=0;
	int j=0;
	int k=0;
	int *tmp = new int[z1+z2];
	while(i<z1 && j<z2)
	{
		if(inp1[i] <= inp2[j])
			tmp[k++] = inp1[i++];
		else
			tmp[k++] = inp2[j++];
	}
	for( ;i<z1; )
		tmp[k++] = inp1[i++];
	for( ;j<z2; )
		tmp[k++] = inp2[j++];

	for(int lv=0; lv<z1+z2; lv++)
		inp1[lv] = tmp[lv];

}
void mergeSort(int *input, int start, int end)
{
	int mid = (start + end)/2;
	int size1 = mid - start + 1;
	int size2 = end - mid;

	if(end-start+1 == 0 || end-start+1 == 1)
		return;
	mergeSort(input, start, mid);
	mergeSort(input, mid+1, end);
	merge(&input[start], &input[mid+1], size1, size2);
}

void intersection(int *inp1, int *inp2, int z1, int z2)
{
	int start1 = 0;
	int end1 = z1 - 1;
	mergeSort(inp1, start1, end1);
	// for(int lv=0; lv<z1; lv++)
	// 	cout<<inp1[lv]<<" ";
	// cout<<endl;

	int start2 = 0; 
	int end2 = z2 - 1;
	mergeSort(inp2, start2, end2);
	// for(int lv=0; lv<z2; lv++)
	// 	cout<<inp2[lv]<<" ";
	// cout<<endl;

	int i = 0;
	int j = 0;
	while(i<z1 && j<z2)
	{
		if(inp1[i] < inp2[j])
			i++;
		else if(inp1[i] == inp2[j])
		{
			cout<<inp1[i]<<endl;
			i++;
			j++;
		}
		else
			j++;
	}
}
int main()
{
	int n;
	int m;
	cin>>n;
	int *input1 = new int[n];
	int *input2 = new int[m];
	for(int i=0; i<n; i++)
	{
		cin>>input1[i];
	}


	cin>>m;
	for(int i=0; i<m; i++)
	{
		cin>>input2[i];
	}

	intersection(input1, input2, n, m);
	return 0;
}