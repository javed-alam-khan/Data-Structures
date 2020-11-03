#include <iostream>
using namespace std;

class Bus
{
	public:
	void print1();
	void print2();
};

class Truck
{
	private:
	int x;
	protected:
	int y;
	public:
	int z;
	// friend void Bus :: print1();
	// friend void Bus :: print2();
	friend class Bus;
	friend void test();
};

void Bus::print1()
{
	Truck t;
	t.x = 10;
	t.y = 20;
	cout << t.x << endl;
	cout << t.y << endl;
}

void Bus::print2()
{
	Truck t;
	t.x = 30;
	t.y = 40;
	cout << t.x << endl;
	cout << t.y << endl;
}

void test()
{
	Truck t;
	t.x = 50;
	t.y = 60;
	cout << t.x << endl;
	cout << t.y << endl;
}

int main()
{
	Bus b;
	b.print1();
	b.print2();
	test();
	return 0;
}