#include<iostream>
#include<math.h>
using namespace std;
int stringToNumber(char input[])
{
	int p = 1;
	int first;
	int small_ans;
	int size = 0;
	char *ch = input;
	int ans;
	while(*ch != '\0')
	{
		size++;
		ch++;
	}
	if(size == 1)
	{
		return (input[0] - '0');
	}
	small_ans = stringToNumber(input+1);
	first = input[0] - '0';
	for(int i=0; i<size-1; i++)
	{
		p *= 10;
	}
	// first = first * pow(10,size-1);
	first = first * p;
	ans = first + small_ans;
	return ans;
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