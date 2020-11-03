#include<iostream>
#include<cstring>
using namespace std;

bool helper(char input[], int start, int end)
{
	int length_ = end - start + 1;
	if(length_==0 || length_==1)
		return true;
	if(input[start] == input[end])
		return helper(input,start+1, end-1);
	else
		return false;
}

bool checkPalindrome(char input[])
{
	int size=0;
	char *ch = input;
	while(*ch != '\0')
	{
		size++;
		ch++;
	}	
	return helper(input, 0, size-1);
}

int main()
{
	char input[50];
	cin>>input;

	if(checkPalindrome(input))
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}