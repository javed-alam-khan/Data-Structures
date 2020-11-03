#include<iostream>
#include<string>
using namespace std;
void helper(int n, string output)
{
	int rem;
	string tmp;
	tmp = output;
	string mapping[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
	if(n==0||n==1)
	{
		cout<<output<<endl;
		return;
	}
	rem = n%10;
	if(rem==7 || rem==9)
	{
		output = mapping[rem][0] + tmp;
		helper(n/10, output);
		output = mapping[rem][1] + tmp;
		helper(n/10, output);
		output = mapping[rem][2] + tmp;
		helper(n/10, output);
		output = mapping[rem][3] + tmp;
		helper(n/10, output);	
	}
	else
	{
		output = mapping[rem][0] + tmp;
		helper(n/10, output);
		output = mapping[rem][1] + tmp;
		helper(n/10, output);
		output = mapping[rem][2] + tmp;
		helper(n/10, output);	
	}
	
}
void printKeypad(int n)
{
	helper(n, "");
}
int main()
{
	int n;
	cin>>n;
	printKeypad(n);
	return 0;
}