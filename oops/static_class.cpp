class Student
{
	private:
	static int count;
	
	public:
	int rNum;
	int age;
	Student()
	{
		count++;
	}
	int getrNum()
	{
		return rNum;
	}
	static int getCount()
	{
		return count;
	}
};
int Student :: count = 0;