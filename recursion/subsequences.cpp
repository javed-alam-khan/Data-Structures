#include<iostream>
#include<math.h>
using namespace std;
// int subsequences(string str,string output[])
int subsequences(string input,string* output)
{
	int small_res;
	string small_input;
	if(input.empty())
	{
		output[0] = "";
		return 1;
	}
	small_input = input.substr(1);
	cout<<"small_input "<<small_input<<endl;
	small_res = subsequences(small_input, output);
	cout<<"small_res "<<small_res<<endl;
	for(int i=0; i<small_res; i++)
	{
		output[small_res + i] = input[0] + output[i];
	}

	cout<<"output elements\t";
	for(int i=0; i<2*small_res; i++)
	{
		cout<<output[i]<<" ";
	}
	cout<<endl;

	return 2*small_res;
}
int main()
{
	int size;
	int op_size;
	int result;
	string input;
	cout<<"Enter string\n";
	cin>>input;
	size = input.size();
	op_size = pow(2,size);
	string* output = new string[op_size];
	result = subsequences(input, output);
	cout<<"In main\n";
	cout<<"output elements\t";
	for(int i=0; i<result; i++)
	{
		cout<<output[i]<<" ";
	}
	cout<<"\n";
	return 0;
}