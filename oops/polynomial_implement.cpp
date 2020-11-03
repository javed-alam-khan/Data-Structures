#include<iostream>
using namespace std;
#include"polynomial_class.cpp"
int main()
{
	int count1;
	int count2;
	int choice;

	cin>>count1;
	int *degree1 = new int[count1];
	for(int i=0; i<count1; i++)
	{
		cin>>degree1[i];
	}

	int *coefficient1 = new int[count1];
	for(int i=0; i<count1; i++)
	{
		cin>>coefficient1[i];
	}

	Polynomial first;
	for(int lv=0; lv<count1; lv++)
	{
		first.setCoefficient(degree1[lv], coefficient1[lv]);
	}
	cin>>count2;
	int *degree2 = new int[count2];
	for(int i=0; i<count2; i++)
	{
		cin>>degree2[i];
	}
	
	int *coefficient2 = new int[count2];
	for(int i=0; i<count2; i++)
	{
		cin>>coefficient2[i];
	}

	Polynomial second;
	// second.print();
	for(int lv=0; lv<count2; lv++)
	{
		second.setCoefficient(degree2[lv], coefficient2[lv]);
	}

	cin>>choice;
	Polynomial result;
	switch(choice)
	{
		case 1: //add
				result = first + second;
				result.print();
				break;
		case 2:	//subtract
				result = first - second;
				result.print();
				break;

		case 3:	//multiply
				result = first * second;
				result.print();
				break;

		case 4: // copy constructor
				{
					Polynomial third(first);
					if(first.degCoeff == third.degCoeff)
						cout<<"false"<<endl;
					else
						cout<<"true"<<endl;
				}
				break;
		
		case 5: // copy assignment operator
				Polynomial fourth;
				fourth = first;
				if(first.degCoeff == fourth.degCoeff)
					cout<<"false"<<endl;
				else
					cout<<"true"<<endl;
				break;

	}

	// first.print();
	// second.print();

	// Polynomial p3(p1);
	// p3.print();
	// Polynomial p4;
	// p4 = p1;
	// p4.print();

	// Polynomial p5 = p1.add(p2);
	// p5.print();
	// Polynomial p8 = p1 + p2;
	// p8.print();

	// Polynomial p6 = p1.subtract(p2);
	// p6.print();
	// Polynomial p9 = p1 - p2;
	// p9.print();

	// Polynomial p7 = p1.multiply(p2);
	// p7.print();

	// Polynomial p10 = p1 * p2;
	// p10.print();
	return 0;
}