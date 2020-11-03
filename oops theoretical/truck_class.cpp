// #include "vehicle_class.cpp"
class Truck : public Vehicle
{
	public:
	Truck()
	{
		cout << "Truck's default constructor is called" << endl;
	}
	void print()
	{
		// cout << "maxSpeed " << maxSpeed << endl;
		cout << "numTyres " << numTyres << endl;		
		cout << "color " << color << endl;
	}
	~Truck()
	{
		cout << "Truck's destructor is called" << endl;
	}
};