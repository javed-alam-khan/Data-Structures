#include <iostream>
#include <stack>
using namespace std;
bool checkRedundantBrackets(char cArr[])
{
	stack <char> stk;
	for(int i=0; cArr[i] != '\0'; i++)
	{
		if(cArr[i] == ')')
		{
			int c = 0;
			while(stk.top() != '(')
			{
				c++;
				stk.pop();
			}
			if(c==0)
			{
				return true;
			}
			else
				stk.pop();
		}
		else
			stk.push(cArr[i]);
	}
	return false;
}
int main()
{
	char cArr[1000];
	cin.getline(cArr,1000);
	if(checkRedundantBrackets(cArr))
		cout << "true" << endl;
	else
		cout << "false" << endl;
	return 0;
}