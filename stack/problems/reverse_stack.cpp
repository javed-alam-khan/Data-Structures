#include <iostream>
#include <stack>
using namespace std;
void print(stack <int> s)
{
	cout << "\nstack elements are\n";
	while(!s.empty())
	{
		cout << s.top() << endl;
		s.pop();
	}
}

void reverseStack(stack <int> &s1, stack <int> &s2)
{
	if(s1.size() == 1 || s1.size() == 0)
		return;
	int tmp;
	tmp = s1.top();
	s1.pop();
	reverseStack(s1, s2);
	while(!s1.empty())
	{
		s2.push(s1.top());
		s1.pop();
	}
	s1.push(tmp);
	while(!s2.empty())
	{
		s1.push(s2.top());
		s2.pop();
	}
}

int main() 
{
	stack <int> s1;
	stack <int> s2;
	int n;
	cin >> n;
	// Taking input into satck
	for(int i=0; i<n; i++)
	{
		int input;
		cin >> input;
		s1.push(input);
	}
	print(s1);
	reverseStack(s1, s2);
	print(s1);
	return 0;
}