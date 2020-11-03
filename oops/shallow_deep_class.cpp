class Student
{
	private:
	char *name;
	int age;

	public:

	Student(char *name, int age)		// parameterized constructor
	{
		// this->name = name;				// shallow copy
		// cout<<"strlen "<<strlen(name)<<endl;
		this->name = new char[strlen(name)+1];
		strcpy(this->name, name);
		this->age = age;				
	}

	void display()
	{
		cout<<name<<" "<<age<<endl;
	}

};