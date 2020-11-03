#include <iostream>
using namespace std;
class Vehicle
{
	private:
		int maxSpeed;
	protected:
		int numTyres;
	public:
		string color;
	// Vehicle()
	// {
	// 	cout << "Vehicle's default constructor is called" << endl;
	// }

	void print()
	{
		cout << "Vehicle" << endl;
	}

	Vehicle(int x)
	{
		cout << "Vehicle's parameterized constructor is called " << x << endl;
	}

	~Vehicle()
	{
		cout << "Vehicle's destructor is called" << endl;
	}
};


class Car : virtual public Vehicle
{
	public:
		int numGears;
	Car() : Vehicle(10)
	{
		cout << "Car's default constructor is called" << endl;
	}
	
	Car(int x, int y) : Vehicle(x) 
	{
		cout << "Car's parameterized constructor is called" << endl;
	}	

	void print()
	{
		cout << "Car" << endl;
	}

	~Car()
	{
		cout << "Car's destructor is called" << endl;
	}
};


class Truck : virtual public Vehicle
{
	public:
	Truck() : Vehicle(20)
	{
		cout << "Truck's default constructor is called" << endl;
	}

	void print()
	{
		cout << "Truck" << endl;
	}

	~Truck()
	{
		cout << "Truck's destructor is called" << endl;
	}
};

class Bus : public Car, public Truck
{
	public:
	Bus() : Vehicle(30)
	{
		cout << "Bus's default constructor is called" << endl;
	}
	// void print()
	// {
	// 	cout << "bus" << endl;
	// }
	~Bus()
	{
		cout << "Bus's destructor is called" << endl;
	}
};

int main()
{
	Bus b;
	// b.print();
	// b.Car :: print();
	// b.Truck :: print();
	// b.Vehicle :: print();
	return 0;
}