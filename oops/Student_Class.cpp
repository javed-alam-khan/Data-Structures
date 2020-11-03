class Student
{
	public:
	int rNum;
	private:
	int age;
	public:
		// Default constructor 
	Student()
	{
		cout<<"Default constructor is called"<<endl;
	}
	void display()
	{
		cout<<"rNum is "<<rNum<<endl;
		cout<<"age is "<<age<<endl;
	}	
	int get()
	{
		return age;
	}
};