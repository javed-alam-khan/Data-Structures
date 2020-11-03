class Student
{
	int rNum;
	public:
	int age;
	void display()
	{
		cout<<"rNum : "<<rNum<<endl;
		cout<<"age : "<<age<<endl;
	}
	int get()
	{
		return age;
	}
	void set(int v, string password)
	{
		if(password != "#jak1")
		{
			cout<<"invalid password\n";
			cout<<"authentication failed\n";
			rNum = -1;
			return;
		}
		rNum = v;
	}
};

