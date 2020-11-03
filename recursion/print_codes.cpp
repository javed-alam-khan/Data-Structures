#include<iostream>
using namespace std;
void helper(string input, string output)
{
	// cout<<"Entered into helper function\n";
	char ch;
	int val1;
	int val2 = 0;
	string o1;
	string o2;
	o1 = output;
	o2 = output;
	string str;
	if(input.empty())
	{
		// cout<<"Entered into base condition\n";
		cout<<output<<endl;
		return;
	}
	val1 = input[0] - '0';
	ch = 'a' + val1 - 1;
	o1.push_back(ch);
	helper(input.substr(1), o1);
	str = input.substr(0,2);
	for(int i=0; i<2; i++)
	{
		val2 = val2*10;
		// cout<<"intermediate : "<<val2<<endl;
		val2 = val2 + str[i]-'0';
	}
	// cout<<"val2 : "<<val2<<endl;
	if(val2>=11 && val2<=26)
	{
		ch = 'a' + val2 - 1;
		o2.push_back(ch);
		helper(input.substr(2), o2);
	}
}
void printAllPossibleCodes(string input)
{
	helper(input,"");
}
int main()
{
	string input;
	cout<<"Enter a Numeric String\n";
	cin>>input;
	// getline(cin,input);
	printAllPossibleCodes(input);
	return 0;
}