#include<iostream>
using namespace std;
#include<math.h>
// result = keypadCode(int num, string output[])
int keypadCode(int num, string* output)
{
	// cout<<"INSIDE keypadCode :\n";
	int rem;
	int small_op;
	int lc;
	string mapping[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	if(num==0 || num==1)
	{
		output[0] = "";
		return 1;
	}
	rem = num % 10;

	// cout<<"rem is : "<<rem<<endl;
	small_op = keypadCode(num/10, output);
	if(rem==1 || rem==0)
		return small_op;
	// cout<<"small_op is : "<<small_op<<endl;
	if(rem==7 || rem==9)
	{
		lc = 4*small_op;
		// cout<<"loop control is : "<<lc<<endl;
		for(int i=lc-1; i>=0; i--)
		{
			output[i] = output[i/4] + mapping[rem][i%4];
		}
	}
	else
	{
		lc = 3*small_op;
		// cout<<"loop control is : "<<lc<<endl;
		for(int i=lc-1; i>=0; i--)
		{
			output[i] = output[i/3] + mapping[rem][i%3];
		}
	}
	

	return lc;
}
int main()
{
	int num;
	int result;
	cout<<"Enter number :\t";
	cin>>num;
	string output[10000];
	result = keypadCode(num, output);
	cout<<"INSIDE MAIN :\n";
	// cout<<"result is "<<result<<endl;
	cout<<"output elements are :\t";
	for(int i=0; i<result; i++)
		cout<<output[i]<<" ";
	cout<<endl;
	return 0;
}