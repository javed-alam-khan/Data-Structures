#include<iostream>
using namespace std;

void helper(string input, string output)
{
	// cout<<"helper\n";
	// cout<<"input : "<<input<<endl;
	// cout<<"output : "<<output<<endl;
	if(input.empty())
	{
		// cout<<"base condition\n";
		cout<<output<<endl;
		return;
	}
	char ch;
	string str;
	for(int i=0; i<input.size(); i++)
	{
		string output1 = output;
		str = "";
		ch = input[i];
		for(int j=0; j<i; j++)
		{
			str = str + input[j];
		}
		for(int k=i+1; input[k] != '\0'; k++)
		{
			str = str + input[k];
		}
		// cout<<"ch : "<<ch<<endl;
		// cout<<"str : "<<str<<endl;
		output1 = output + ch;
		// cout<<"output : "<<output<<endl;
		helper(str, output1);
	}
}
void printPermutations(string input)
{
	helper(input, "");
}
int main()
{
	string input;
	cin>>input;
	printPermutations(input);
	return 0;
}