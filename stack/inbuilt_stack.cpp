#include <iostream>
using namespace std;
#include <stack>
int main()
{
	stack <int> s1;
	// cout << s1.empty() << endl;
	s1.push(10);
	// cout << s1.empty() << endl;
	s1.push(20);
	// cout << s1.top() << endl;
	cout << s1.top() << endl;
	s1.pop();
	cout << s1.top() << endl;
	// cout << s1.size() << endl;
	s1.pop();
	s1.pop();
	s1.pop();
	s1.pop();
	// cout << s1.top() << endl;
	// cout << s1.top() << endl;
	// cout << s1.size() << endl;

	stack <char> s2;
	s2.push(97);
	s2.push(98);
	cout << s2.top() << endl;
	s2.pop();
	cout << s2.top() << endl;
	s2.pop();
	// cout << s2.top() << endl;
	return 0;
} 