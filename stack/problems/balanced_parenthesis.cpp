#include <iostream>
#include <stack>
using namespace std;
bool checkBalanced(char cArr[])
{
	stack <char> s;
	for(int i=0; cArr[i]!='\0'; i++)
	{
		if(cArr[i] == '[' || cArr[i] == '{' || cArr[i] == '(')
		{
			s.push(cArr[i]);
		}
		else if(cArr[i] == ']')
		{
			if(!s.empty())
			{
				if(s.top() == '[')
					s.pop();
				else
					return false;
			}
			else
				return false;
		}
		else if(cArr[i] == '}')
		{
			if(!s.empty())
			{
				if(s.top() == '{')
					s.pop();
				else
					return false;
			}
			else
				return false;
		}
		else if(cArr[i] == ')')
		{
			if(!s.empty())
			{
				if(s.top() == '(')
					s.pop();
				else
					return false;
			}
			else
				return false;
		}
	}

	if(s.empty())
		return true;
	else
		return false;
}
int main()
{
	char cArr[100000];
	cin.getline(cArr, 100000);
	cout << checkBalanced(cArr) << endl;
	return 0;
}