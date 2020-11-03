#include<iostream>
using namespace std;
#include"op_overload_fraction_class.cpp"
int main()
{
	Fraction f1(10,3);
	f1.display();
	Fraction f2(5,2);
	f2.display();
	// Fraction f3 = f1.add(f2);
	// f3.display();
	// Fraction f4 = f1.multiply(f2);
	// f4.display();
	// Fraction f5 = f1 + f2;
	// f5.display();
	// Fraction f6 = f1 * f2;
	// f6.display();
	// Fraction f7(10,2);
	// Fraction f8(5,1);
	// if(f7 == f8)
	// 	cout<<"equal"<<endl;
	// else
	// 	cout<<"unequal"<<endl;
	// Fraction f8 = f1++;
	// f8.display();
	// f1.display();
	(f1 += f2) += f2;
	f1.display();	
	f2.display();
	return 0;
}