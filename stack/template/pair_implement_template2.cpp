#include <iostream>
using namespace std;
#include "pair_class_template2.cpp"
int main()
{
	Pair <int, double>p1;
	p1.setX(10);
	cout << p1.getX() << " ";

	p1.setY(90.5);
	cout << p1.getY() << endl;

	Pair <double, char>p2;
	p2.setX(15.45);
	cout << p2.getX() << " ";

	p2.setY('y');
	cout << p2.getY() << endl;

	Pair <char, int>p3;
	p3.setX('x');
	cout << p3.getX() << " ";

	p3.setY(100);
	cout << p3.getY() << endl;
	return 0;
}