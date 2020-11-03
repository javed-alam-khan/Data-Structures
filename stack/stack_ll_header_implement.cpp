#include <iostream>
#include <climits>
using namespace std;
#include "stack_ll_template_class.h"
int main()
{
	stack <int> s1;
	// cout << s1.isEmpty() << endl;
	// cout << s1.getSize() << endl;
	s1.push(10);
	// cout << s1.getSize() << endl;
	// cout << s1.isEmpty() << endl;
	s1.print();
	s1.push(20);
	// cout << s1.getSize() << endl;
	s1.print();
	s1.push(30);
	s1.print();
	cout << s1.top() << endl;
	cout << s1.top() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;
	cout << s1.pop() << endl;

	stack <char> s2;
	// cout << s2.isEmpty() << endl;
	// cout << s2.getSize() << endl;
	s2.push('a');
	// cout << s2.getSize() << endl;
	// cout << s2.isEmpty() << endl;
	s2.print();
	s2.push('b');
	// cout << s2.getSize() << endl;
	s2.print();
	s2.push('c');
	s2.print();
	cout << s2.top() << endl;
	cout << s2.top() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	cout << s2.pop() << endl;
	return 0;
}