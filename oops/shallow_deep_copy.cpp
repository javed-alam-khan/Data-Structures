#include<iostream>
#include<cstring>
using namespace std;
#include"shallow_deep_class.cpp"
int main()
{
	char name[] = "abcd";
	int age = 99;
	Student s1(name,age);
	s1.display();
	name[3] = 'e';
	Student s2(name,age);
	s2.display();	
	s1.display();	
	return 0;
}