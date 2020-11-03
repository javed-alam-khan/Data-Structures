#include<iostream>
using namespace std;
int subsetSumToK(int input[], int size, int output[][50], int k)
{	
	cout<<"inside subsetSumToK"<<endl;
	cout<<"input : ";
	for(int i=0; i<size; i++)
	{
		cout<<input[i]<<" ";
	}
	cout<<endl;
	cout<<"k : "<<k<<endl;
	int n_op1[1000][50];
	int n_op2[1000][50];
	int small_r1;
	int small_r2;
	if(size == 0)
	{
		cout<<"inside base condition\n";
		if(k==0)
		{
			cout<<"inside if\n";
			output[0][0] = 0;
			cout<<"output[0][0] : "<<output[0][0]<<endl;
			return 1;
		}
		else
		{
			cout<<"inside else\n";
			return 0;
		}
	}
	small_r1 = subsetSumToK(input + 1, size-1, n_op1, k-input[0]);
	small_r2 = subsetSumToK(input + 1, size-1, n_op2, k);
	for(int i=0; i<small_r1;i++)
	{
		cout<<"inside copy 1\n";
		output[i][0] = n_op1[i][0] + 1;
		cout<<"output["<<i<<"][0] : "<<output[i][0]<<endl;
		output[i][1] = input[0];
		cout<<"output["<<i<<"][1] : "<<output[i][1]<<endl;
		for(int j=1;j<=n_op1[i][0] ;j++)
		{
			output[i][j+1] = n_op1[i][j];
			cout<<"output["<<i<<"]["<<j+1<<"] : "<<output[i][j+1]<<endl;
		}
	}
	for(int i=0; i<small_r2;i++)
	{
		cout<<"inside copy 2\n";
		output[i+small_r1][0] = n_op2[i][0];
		cout<<"output["<<i+small_r1<<"][0] : "<<output[i+small_r1][0]<<endl;
		for(int j=1 ;j<=n_op2[i][0] ;j++)
		{
			output[i+small_r1][j] = n_op2[i][j];
			cout<<"output["<<i+small_r1<<"]["<<j<<"] : "<<output[i+small_r1][j]<<endl;
		}
	}
	cout<<"small_r1 : "<<small_r1<<endl;
	cout<<"small_r2 : "<<small_r2<<endl;
	return small_r1+small_r2;
}
int main()
{
	int input[1000];
	int output[1000][50];
	int size;
	int k;
	int r;
	cout<<"Enter size :\n";
	cin>>size;
	if(size>0)
		cout<<"Enter array elements :\n";
	for(int i=0; i<size; i++)
	{
		cin>>input[i];
	}
	cout<<"Enter the key :\n";
	cin>>k;
	r = subsetSumToK(input, size, output, k);

	cout<<"result : "<<r<<endl;
	for(int i=0; i<r; i++)
	{
		cout<<"output["<<i<<"][0] : "<<output[i][0]<<" ";
		for(int j=1; j<=output[i][0]; j++)
			cout<<"output["<<i<<"]["<<j<<"] : "<<output[i][j]<<" ";
		cout<<endl;
	}		
	return 0;
}