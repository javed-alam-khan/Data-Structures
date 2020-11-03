#include <iostream>
using namespace std;
#include "pair_class_template1.cpp"
int main()
{
	Pair <int>p1;
	p1.setX(10);
	cout << p1.getX() << endl;

	p1.setY(90);
	cout << p1.getY() << endl;

	Pair <double>p2;
	p2.setX(15.45);
	cout << p2.getX() << endl;

	p2.setY(50.95);
	cout << p2.getY() << endl;

	Pair <char>p3;
	p3.setX('x');
	cout << p3.getX() << endl;

	p3.setY('y');
	cout << p3.getY() << endl;
	return 0;
}