#include<iostream>
using namespace std;

bool helper(char* input, int index)
{
	if(input[index] == '\0')
		return true;
	else if(input[index] == 'a')
	{
		if(input[index+1] == 'b' && input[index+2]=='b')
			return helper(input, index+3);
		return helper(input, index+1);
	}
	return false;
}
bool checkAB(char* input)
{
	return helper(input, 0);
}
int main()
{
	char input[100];
	bool ans;
	cin>>input;
	ans = checkAB(input);
	// cout<<"ans "<<ans<<endl;
	if(ans)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}