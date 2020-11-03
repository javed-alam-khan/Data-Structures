#include "teacher_class.cpp"
#include "student_class.cpp"
class TA : public Teacher, public Student
{
	public:
	string name;
	string age;
	void print()
	{
		cout << "TA" << endl;
		cout << name << endl;
	}
};