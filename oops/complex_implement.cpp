#include<iostream>
using namespace std;
#include"complex_class.cpp"
int main()
{
	int real1, imaginary1;
	int real2, imaginary2;
	int choice;

	cin>>real1>>imaginary1;
	cin>>real2>>imaginary2;
	cin >> choice;

	ComplexNumbers c1(real1,imaginary1);
	c1.print();
	ComplexNumbers c2(real2,imaginary2);
	c2.print();    
    
    if(choice == 1) 
    {
        c1.plus(c2);
        c1.print();
        c2.print();
    }
    else if(choice == 2) 
    {
        c1.multiply(c2);
        c1.print();
        c2.print();
    }
    else 
    {
        return 0;
    }  
    
    return 0;
}