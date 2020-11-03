#include<iostream>
using namespace std;
int helper(string input, string output[10000])
{ 
    if(input[0]=='\0')
    {
        output[0]="";
        return 1;
    }
    
	int sr1;
	int sr2;
	int val1;
	char ch;
    
	string op1[10000];
	string op2[10000];
    
	val1 = input[0]-'0';
	ch = 'a' + val1 - 1;
    char ch2='\0';
	
	sr1 = helper(input.substr(1), op1);
	sr2=0;
    
    if(input[1]!='\0')
    {
        int val2 =val1*10+input[1]-'0';
        if(val2>=10&&val2<=26)
        {
            ch2=val2+'a'-1;
            sr2=helper(input.substr(2),op2);
        }
    }
    int k=0;
    for(int i=0;i<sr1;i++)
    {
        output[k]=ch+op1[i];
        k++;
    }
    for(int i=0;i<sr2;i++)
    {
        output[k]=ch2+op2[i];
        k++;
    }
    return k;
}
int getCodes(string input, string output[10000])
{
	return helper(input, output);
}
int main()
{
	int r;
	string input;
	cin>>input;
	// getline(cin,input);
	string output[10000];
	r = getCodes(input, output);
	cout<<"r : "<<r<<endl;
	for(int i=0; i<r && i<10000; i++)
		cout<<output[i]<<endl;
	return 0;
}