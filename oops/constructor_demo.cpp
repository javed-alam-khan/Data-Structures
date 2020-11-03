#include<iostream>
using namespace std;
#include"Student_class_constructor.cpp"
int main()
{
	Student s1(111,11);
	s1.display();
	// cout<<s1.getAge()<<endl;
	// Student s2(55);
	// cout<<&s2<<endl;
	// s2.display();
	// Student *s3 = new Student();
	// (*s3).display();
	// Student *s4 = new Student(444,44);
	// *s4 = s1;
	// (*s4).display();
	// cout<<"checkpoint"<<endl;
	// delete s4;
	// Student s5(*s4);
	// s5.rNum = (*s4).rNum;
	// s5.age = (*s4).age;
	// s5.display();
	// Student *s6 = new Student(s1);
	// (*s6).display();
	// Student *s7 = new Student(*s4);
	// (*s7).display();
	// Student s8(s1);
	// s8.display();
	// Student s9(999,99);
	// s9.display();
	// s9.rNum = s1.rNum;
	// s9.age = s1.age;
	// s9 = *s4;
	// s9.display();
	// Student s10;
	// s10 = s1;
	Student s10 = s1;
	s10.display();
	return 0;
}