#include <iostream>
using namespace std;
#include "pair_class.cpp"
int main()
{
	Pair p;
	p.setX(10);
	cout << p.getX() << endl;

	p.setY(90);
	cout << p.getY() << endl;
	return 0;
}