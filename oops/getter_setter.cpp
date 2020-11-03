#include<iostream>
using namespace std;
#include"newStudentClass.cpp"
int main()
{
	Student s1;
	Student *s2 = new Student;
	Student *s3 = new Student;
	s1.age = 99;
	// s1.set(-10);
	s1.set(202010,"jak1");
	s1.display();
	// cout<<s1.get()<<endl;
	// (*s2).age = 99;
	// (*s2).set(202020);
	// (*s2).display();
	// cout<<(*s2).get()<<endl;
	// s3->age = 999;
	// s3->set(202030);
	// s3->display();
	// cout<<s3->get()<<endl;
	return 0;
}