#include<iostream>
using namespace std;
void printSubseq(string input, string output)
{
	if(input.empty())
	{
		cout<<output<<endl;
		return;
	}
	printSubseq(input.substr(1), output);
	printSubseq(input.substr(1), output + input[0]);
}
int main()
{
	string input;
	getline(cin,input);
	// cout<<input.substr(1)<<endl;
	printSubseq(input, "");
	return 0;
}