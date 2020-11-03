#include <iostream>
using namespace std;
class Vehicle
{
	public :
	string color;
	virtual void print()
	{
		cout << "Vehicle" << endl;
	}
};

class Car : public Vehicle
{
	public :
	int numGears;
	void print()
	{
		cout << "Car" << endl;
	}
};

int main()
{
	// Vehicle *v1 = new Car();
	// Vehicle *v1 = new Car;
	// v1->print();
	Vehicle *v2 = new Vehicle;
	v2->print();
	return 0;
}