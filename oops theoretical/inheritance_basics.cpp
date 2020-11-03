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
	void print()
	{
		cout << "maxSpeed " << maxSpeed << endl;
		cout << "numTyres " << numTyres << endl;
		cout << "color " << color << endl;
	}
};

class Car : public Vehicle
{
	private:
		string carModel;
	public:
		int numGears;
	void print()
	{
		// cout << "maxSpeed " << maxSpeed << endl;
		cout << "numTyres " << numTyres << endl;
		cout << "carModel " << carModel << endl;
		cout << "color " << color << endl;
		cout << "numGears " << numGears << endl;
	}
};

int main()
{
	Vehicle v;
	// v.maxSpeed = 100;
	// v.numTyres = 4;
	v.color = "red";
	v.print();

	Car c;
	// c.maxSpeed = 100;
	// c.numTyres = 4;
	c.color = "white";
	c.numGears = 5;
	c.print();
	return 0;
}