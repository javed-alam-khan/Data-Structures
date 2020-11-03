#include "car_class.cpp"
class HondaCity : public Car
{
	public:
	HondaCity()
	{
		cout << "Honda City's default constructor is called" << endl; 
	}
	HondaCity(int a, int b) : Car(bs)
	{
		cout << "Honda City's parameterized constructor is called" << endl;
	}
	~HondaCity()
	{
		cout << "Honda City's destructor is called" << endl;

	}
};