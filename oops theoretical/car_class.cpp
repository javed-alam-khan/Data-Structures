#include "vehicle_class.cpp"
class Car : public Vehicle
{
	public:
		int numGears;
	Car()
	{
		cout << "Car's default constructor is called" << endl;
	}
	
	Car(int x) : Vehicle(x) 
	{
		cout << "Car's parameterized constructor is called" << endl;
	}	

	~Car()
	{
		cout << "Car's destructor is called" << endl;
	}
};