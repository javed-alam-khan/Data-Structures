class Student
{
	private:
	int age;
	
	public:
	char *name;

	Student(char *name, int age)							//Parameterized Constructor
	{
		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);
		this->age = age;
	}

	Student(Student const &s)			//Copy Constructor
	{
		name = new char[strlen(s.name) + 1];
		strcpy(name, s.name);
		age = s.age;
	}	

	void display()
	{
		cout<<name<<" "<<age<<endl;
	}
};