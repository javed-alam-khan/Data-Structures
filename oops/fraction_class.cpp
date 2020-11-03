class Fraction
{
	private:
	int numerator;
	int denominator;
	public:
	Fraction()									//Default constructor
	{
		cout<<"Default constructor is called"<<endl;
	}
	Fraction(int numerator, int denominator)	//Parameterized constructor
	{
		(*this).numerator = numerator;
		(*this).denominator = denominator;
	}
	void display() const
	{
		cout<<numerator<<"/"<<denominator<<endl;
	}
	int getNumerator() const
	{
		return numerator;
	}
	int getDenominator() const
	{
		return denominator;
	}
	void setNumerator(int numerator)
	{
		(*this).numerator = numerator;
	}
	void setDenominator(int denominator)
	{
		(*this).denominator = denominator;
	}
	void simplify()
	{
		int gcd = 1;
		int lc;
		lc = min(numerator,denominator);
		for(int lv = 1; lv <= lc; lv++)
		{
			if(numerator%lv == 0 && denominator%lv == 0)
			{
				gcd = lv;
			}
		}
		numerator = numerator/gcd;
		denominator = denominator/gcd;
	}
	void add(Fraction const &other)
	{
		int denomProd;
		denomProd = denominator * other.denominator;
		numerator = (numerator*other.denominator) + (denominator*other.numerator);
		denominator = denomProd;
		(*this).display();
		simplify();
		cout<<"simplified ";
		this->display();
	}

	void multiply(Fraction const &other)
	{
		numerator = (numerator*other.numerator);
		denominator = (denominator*other.denominator);
		(*this).display();
		simplify();
		cout<<"simplified ";
		this->display();
	}
};