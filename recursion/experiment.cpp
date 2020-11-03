#include<iostream>
using namespace std;
int returnPermutations(string input, string *output)
{
	cout<<"enter\n";
	if(input.empty())
    {
    	cout<<"base case\n";
        output[0]="";
        return 1;
    }
	char ch;
	string str;
	int k = 0;
	for(int i=0; i<input.size(); i++)
	{
		string *output1 = output;
		// cout<<"output1 : "<<output1<<endl;
		str = "";
		ch = input[i];
		cout<<"ch : "<<ch<<endl;
		for(int j=0; j<i; j++)
		{
			str = str + input[j];
		}
		for(int k=i+1; input[k] != '\0'; k++)
		{
			str = str + input[k];
		}
		cout<<"str : "<<str<<endl;
		int lc = returnPermutations(str, output1);
		
	    for(int i=0; i<lc; i++)
	    {
	        output[k] = ch+output1[i];
	        cout<<"output["<<k<<"] : "<<output[k]<<endl;
	        k++;
	    }
	    cout<<"k : "<<k<<endl;
	}
	cout<<"exit\n";
	return k;
}
int main()
{
	string input;
	int r;
	// cin>>input;
	getline(cin, input);
	string output[10000];
	r = returnPermutations(input, output);
	cout<<"r : "<<r<<endl;
	for(int i=0; i<r && i<10000; i++)
		cout<<output[i]<<endl;
	return 0;
}