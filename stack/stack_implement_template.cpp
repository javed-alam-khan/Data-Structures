#include <iostream>
using namespace std;
#include <climits>
#include "stack_class_template.cpp"


int main()
{
	stackUsingArr <int> s1(3);
	s1.push(10);
	// s1.print();
	s1.push(20);
	// s1.print();
	s1.push(30);
	// s1.print();
	s1.push(40);
	// s1.print();
	cout << s1.top() << endl;
	// s1.print();
	cout << s1.pop() << endl;
	// s1.print();
	cout << s1.pop() << endl;
	// s1.print();
	cout << s1.pop() << endl;
	// s1.print();
	cout << s1.pop() << endl;
	// s1.print();
	cout << s1.size() << endl;
	cout << s1.isEmpty() << endl;


	stackUsingArr <char> s2(3);
	s2.push('a');
	// s1.print();
	s2.push('b');
	// s1.print();
	s2.push('c');
	// s1.print();
	s2.push('d');
	// s1.print();
	cout << s2.top() << endl;
	// s1.print();
	cout << s2.pop() << endl;
	// s1.print();
	cout << s2.pop() << endl;
	// s1.print();
	cout << s2.pop() << endl;
	// s1.print();
	cout << s2.pop() << endl;
	// s1.print();
	cout << s2.size() << endl;
	cout << s2.isEmpty() << endl;
	return 0;
}