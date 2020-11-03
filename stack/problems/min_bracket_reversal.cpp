#include <iostream>
#include <stack>
using namespace std;
int countBracketReversals(char cArr[])
{
	int size = 0;
	for(int i=0; cArr[i] != '\0'; i++)
		size++;
	if(size%2 != 0)
		return -1;

	stack <char> stk;
	for(int i=0; cArr[i] != '\0'; i++)
	{
		if(cArr[i] == '{')
			stk.push(cArr[i]);
		else
		{
			if(stk.empty() || stk.top() == '}')
				stk.push(cArr[i]);
			else
			{
				stk.pop();
			}
		}
	}
	int count = 0;
	while(!stk.empty())
	{
		char c1 = stk.top();
		stk.pop();
		char c2 = stk.top();
		stk.pop();
		if(c1==c2)
			count++;
		else if(c1 == '{' && c2 == '}')
			count += 2;
	}

	return count;
}
int main()
{
	char cArr[1000];
	cin.getline(cArr, 1000);
	cout << countBracketReversals(cArr) << endl;
	return 0;
}