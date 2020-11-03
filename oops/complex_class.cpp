class ComplexNumbers
{
	private:
	int real;
	int imaginary;
	public:
	ComplexNumbers(int real, int imaginary)
	{
		(*this).real = real;
		(*this).imaginary = imaginary;
	}
	void print()
	{
		cout<<real<<" + i"<<imaginary<<endl;
	}
	void plus(ComplexNumbers other)
	{
		real = real + other.real;
		imaginary = imaginary + other.imaginary;
	}
	void multiply(ComplexNumbers const &other)
	{
		int tmp;
		tmp = (real * other.real) - (imaginary*other.imaginary);
		imaginary = (real * other.imaginary) + (imaginary*other.real);
		real = tmp;
	}
};