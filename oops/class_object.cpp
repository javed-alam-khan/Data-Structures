#include<iostream>
#include "Student_class.cpp"
using namespace std;
int main()
{
	Student s1;
	Student s2;
	Student *s3 = new Student;
	Student *s4 = new Student;
	
	s1.rollNum = 202025;
	s1.age = 25;
	s2.rollNum = 202050;
	s2.age = 50;

	(*s3).rollNum = 2020100;
	(*s3).age = 100;
	s4->rollNum = 2020200;
	s4->age = 200;

	cout<<"s1.rollNum : "<<s1.rollNum<<endl;
	cout<<"s1.age : "<<s1.age<<endl;
	cout<<"s2.rollNum : "<<s2.rollNum<<endl;
	cout<<"s2.age : "<<s2.age<<endl;
	cout<<"(*s3).rollNum : "<<(*s3).rollNum<<endl;
	cout<<"(*s3).age : "<<(*s3).age<<endl; 
	cout<<"s4->rollNum : "<<s4->rollNum<<endl;
	cout<<"s4->age : "<<s4->age<<endl;  
	return 0;
}