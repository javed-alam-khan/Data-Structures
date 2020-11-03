#include<iostream>
using namespace std;
void helper(int *input, int inp_size, int k, int *output, int op_size)
{
	cout<<"input : ";
	for(int i=0; i<inp_size; i++)
	{
		cout<<input[i]<<" ";
	}
	cout<<"\n";
	cout<<"k : "<<k<<endl;

	cout<<"output : ";
	for(int i=0; i<op_size; i++)
	{
		cout<<output[i]<<" ";
	}
	cout<<endl;

	if(inp_size==0)
	{
		if(k==0)
		{
			cout<<"inside if base condition"<<endl;
			for(int i=0; i<op_size; i++)
				cout<<output[i]<<" ";
			cout<<endl;
			return;
		}
		else
		{
			cout<<"inside else base condition"<<endl;
			return;
		}
	}

	int n_output[1000];
	{
		int i;
		for(i=0; i<op_size; i++)
		{
			n_output[i] = output[i];
		}
		n_output[i] = input[0];
	}

	helper(input+1, inp_size-1, k-input[0], n_output, op_size+1);
	helper(input+1, inp_size-1, k, output,op_size);
}
void printSubsetSumToK(int *input, int size, int k)
{
	helper(input, size, k, {}, 0);
}
int main()
{
	int size;
	int input[1000];
	int k;
	cout<<"Enter the size :\n";
	cin>>size;
	if(size>0)
		cout<<"Enter the elements\n";
	for(int i=0; i<size; i++)
		cin>>input[i];
	cout<<"Enter k"<<endl;
	cin>>k;
	printSubsetSumToK(input, size, k);
	return 0;
}
