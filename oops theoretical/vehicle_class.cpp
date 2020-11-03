class Vehicle
{
	private:
		int maxSpeed;
	protected:
		int numTyres;
	public:
		string color;
	Vehicle()
	{
		cout << "Vehicle's default constructor is called" << endl;
	}

	Vehicle(int x)
	{
		cout << "Vehicle's parameterized constructor is called" << endl;
	}

	~Vehicle()
	{
		cout << "Vehicle's destructor is called" << endl;
	}
};