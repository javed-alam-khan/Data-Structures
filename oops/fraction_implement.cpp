#include<iostream>
using namespace std;
#include"fraction_class.cpp"
int main()
{
	// Fraction f1(10,2);
	// Fraction f2(15,4);
	// f1.simplify();
	// f1.display();
	// f2.display();

	// f1.add(f2);
	// f2.display();

	// f1.multiply(f2);
	// f2.display();
	Fraction const f;
	f.display();
	cout<<f.getNumerator()<<endl;
	cout<<f.getDenominator()<<endl;
	return 0;
}