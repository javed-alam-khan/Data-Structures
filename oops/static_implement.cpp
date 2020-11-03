#include<iostream>
using namespace std;
#include"static_class.cpp"
int main()
{
	Student s1;
	// cout<<Student::count<<endl;
	Student s2;
	// cout<<Student::count<<endl;
	// cout<<s1.getrNum()<<endl;
	Student s3;
	cout<<s2.getCount()<<endl;
	cout<<s3.getCount()<<endl;
	cout<<Student::getCount()<<endl;
	return 0;
}