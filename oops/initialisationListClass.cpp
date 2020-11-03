class Student
{
	public:
	const int rNum;
	int age;
	int &ref;
	Student(int r, int age) : rNum(r), age(age), ref(this->age)
	{
	}
	void display()
	{
		cout<<rNum<<" "<<age<<" "<<endl;
		cout<<ref<<endl;
	}
};