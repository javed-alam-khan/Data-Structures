#include<iostream>
using namespace std;
#include"dynamicArrayClass.cpp"
int main()
{
	DynamicArray d1;
	// d1.print();
	d1.add(10);
	d1.add(20);
	d1.add(30);
	d1.add(40);
	d1.print();
	// d1.insert(0,9);
	// d1.print();
	// d1.insert(1,99);
	// d1.print();
	// d1.insert(5,555);
	// d1.print();
	// d1.insert(4,100);
	// d1.print();
	// d1.insert(5,200);
	// d1.print();
	// d1.insert(6,300);
	// d1.print();
	// cout<<d1.getElem(0)<<endl;
	// cout<<d1.getElem(2)<<endl;
	// cout<<d1.getElem(6)<<endl;
	// cout<<d1.getElem(10)<<endl;
	DynamicArray d2(d1);
	// DynamicArray d2;
	// d2 = d1;
	d1.print();
	d2.print();
	return 0;
}