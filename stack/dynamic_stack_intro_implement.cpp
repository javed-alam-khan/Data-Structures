#include <iostream>
using namespace std;
#include <climits>
#include "dynamic_stack_intro_class.cpp"


int main()
{
	stackUsingArr s1;
	s1.push(10);
	s1.print();
	s1.push(20);
	s1.print();
	s1.push(30);
	s1.print();
	s1.push(40);
	s1.print();
	s1.push(50);
	s1.print();
	cout << s1.top() << endl;
	s1.print();
	cout << s1.pop() << endl;
	s1.print();
	cout << s1.pop() << endl;
	s1.print();
	cout << s1.pop() << endl;
	s1.print();
	cout << s1.size() << endl;
	cout << s1.isEmpty() << endl;
	return 0;
}