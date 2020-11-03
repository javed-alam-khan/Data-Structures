#include<iostream>
using namespace std;
#include<cstring>
#include"ownCopyConstrClass.cpp"
int main()
{
	char name[] = "abcd";
	Student s1(name, 20);
	s1.display();

	Student s2(s1);
	s2.name[0] = 'x';
	s1.display();
	s2.display();
	return 0;
}