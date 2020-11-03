#include <iostream>
using namespace std;
#include "pair_class_template3.cpp"
int main()
{
	Pair <Pair <int, double>, char> p1;

	Pair <int, double> tmp;
	tmp.setX(10);
	cout << tmp.getX() << " ";
	tmp.setY(55.5);
	cout << tmp.getY() << endl;

	p1.setX(tmp);
	p1.setY('a');

	cout << p1.getY() << endl;
	cout << p1.getX().getX() << " ";
	cout << p1.getX().getY() << endl;
	return 0;
} 