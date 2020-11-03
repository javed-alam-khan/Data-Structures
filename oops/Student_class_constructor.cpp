class Student
{
	
	public:
	int rNum;
	// private:
	int age;
	// public:
		// Default Constructor 
	Student()
	{
		cout<<"Default constructor is called"<<endl;
	}

	// Destructor
	~Student()
	{
		cout<<"Destructor is called"<<endl;
	}

	// Parametrized Constructor with single argument
	Student(int age)
	{
		cout<<"Parametrized constructor with one argument is called"<<endl;
		this->age = age;
		cout<<"age "<<age<<endl;
		cout<<"this"<<" "<<this<<endl;
	}

	// Parametrized Constructor with two arguments
	Student(int r, int a)
	{
		cout<<"Parametrized constructor with two arguments is called"<<endl;
		(*this).rNum = r;
		(*this).age = a;
	}

	void display()
	{
		cout<<"rNum is "<<rNum<<endl;
		cout<<"age is "<<age<<endl;
	}	
	int getAge()
	{
		return age;
	}
};