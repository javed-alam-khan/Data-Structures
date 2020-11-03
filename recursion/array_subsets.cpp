#include<iostream>
using namespace std;
int subset(int *input, int n, int output[5000][20])
{
	int small_op;
	if(n==0)
	{
		output[0][0] = 0;
		return 1;
	}
	small_op = subset(input+1, n-1, output);
	for(int i=small_op; i<(2*small_op); i++)
	{
		int j;
		output[i][0] = output[i-small_op][0] + 1;
		output[i][1] = *input;
		for(j=2; j<=output[i-small_op][0]+1; j++)
		{
			output[i][j] = output[i-small_op][j-1];
		}
		
	}
	return 2*small_op;
}
int main()
{
	int size;
	int input[100];
	int output[5000][20];
	int r_length;
	cout<<"Enter size :\n";
	cin>>size;
	cout<<"Enter array elements :\n";
	for(int i=0; i<size; i++)
	{
		cin>>input[i];
	}

	r_length = subset(input, size, output);
	cout<<"r_length : "<<r_length<<endl;

	for(int i=0; i<r_length; i++)
	{
		for(int j=1; j<=output[i][0]; j++)
			cout<<output[i][j]<<" ";
		cout<<endl;
	}
	
	return 0;
}


