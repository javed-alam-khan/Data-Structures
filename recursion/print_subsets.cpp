#include<iostream>
using namespace std;
void helper(int *input, int inp_size, int* output, int op_size)
{
	int new_output[1000];
	if(inp_size == 0)
	{
		for(int i=0; i<op_size; i++)
			cout<<output[i]<<" ";
		cout<<endl;
		return;
	}
	int i;
	for(i=0; i<op_size; i++)
		new_output[i] = output[i];
	new_output[i] = *input;
	helper(input+1, inp_size-1, output,op_size);
	helper(input+1, inp_size-1, new_output, op_size+1);

}
void printSubsetOfArray(int input[], int size)
{
	helper(input,size,{},0);
}

int main()
{
	int size;
	int input[1000];
	cout<<"enter size\n";
	cin>>size;
	if(size>0)
		cout<<"Enter elements in the array\n";
	for(int i=0; i<size; i++)
		cin>>input[i];
	printSubsetOfArray(input, size);
	return 0;
}