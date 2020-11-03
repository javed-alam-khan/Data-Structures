#include <iostream>
using namespace std;
#include "ta_class.cpp"
int main()
{
	TA t;
	t.name = "name TA";
	t.print();
	t.Student :: name = "name Student";
	t.Student :: print();
	t.Teacher :: name = "name Teacher";
	t.Teacher :: print();
	return 0;
}