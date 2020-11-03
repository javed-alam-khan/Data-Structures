#include<iostream>
#include<math.h>
using namespace std;
int stringToNumber(char input[])
{
	int last;
	int small_ans;
	char *ch = input;
	if(*(ch+1) == '\0')
		return *ch - '0';
	while(*(ch+1) != '\0')
	{
		ch++;
	}
	last = *ch - '0';
	*ch = '\0';
	small_ans = stringToNumber(input);
	return small_ans*10 + last;
}
int main()
{
	int result;
	char input[10];
	cout<<"Enter string"<<endl;
	cin>>input;
	result = stringToNumber(input);
	cout<<result<<endl;
	return 0;
}