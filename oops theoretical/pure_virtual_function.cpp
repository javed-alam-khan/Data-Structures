#include <iostream>
using namespace std;
class Vehicle
{
	public:
	string color;
	virtual void print() = 0;
};

class Car : Vehicle
{
	public:
	int numGears;
	void print()
	{
		cout << "Car" << endl;
	}
};

int main()
{
	// Vehicle v;
	Car c;
	c.print();
	return 0;
}