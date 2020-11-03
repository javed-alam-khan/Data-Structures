#include <iostream>
using namespace std;
class Vehicle
{
	public:
	string color;
	Vehicle()
	{
		cout << "Vehicle's default constructor is called" << endl;
	}
	~Vehicle()
	{
		cout << "Vehicle's destructor is called" << endl;
	}
	void print()
	{
		cout << "Vehicle" << endl;
	}
};
class Car : public Vehicle
{
	public:
	int numGears;
	Car()
	{
		cout << "Car's default constructor is called" << endl;
	}
	~Car()
	{
		cout << "Car's destructor is called" << endl;
	}
	void print()
	{
		cout << "Car" << endl;
	}
};

int main()
{
	// Vehicle v;
	// v.print();
	// Car c;
	// c.print();
	// Vehicle* v1 = new Vehicle;
	// v1->print();
	// Car *test;
	Car* v2 = new Car();
	v2->print();
	// Vehicle* v3 = v2;
	// v3->print();
	// Vehicle* v4 = &c;
	// v4->print();
	return 0;
}