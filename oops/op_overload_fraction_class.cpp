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

	Fraction add(Fraction const &other) const
	{
		int num;
		int denom;
		num = (numerator*other.denominator) + (denominator*other.numerator);
		denom = denominator * other.denominator;
		Fraction newFrac(num , denom);
		newFrac.simplify();
		return newFrac;
	}

	Fraction operator+(Fraction const &other) const
	{
		int num;
		int denom;
		num = (numerator*other.denominator) + (denominator*other.numerator);
		denom = denominator * other.denominator;
		Fraction newFrac(num , denom);
		newFrac.simplify();
		return newFrac;
	}

	Fraction multiply(Fraction const &other) const
	{
		int num;
		int denom;
		num = (numerator*other.numerator);
		denom = (denominator*other.denominator);
		Fraction newFrac(num , denom);
		newFrac.simplify();
		return newFrac;
	}

	Fraction operator*(Fraction const &other) const
	{
		int num;
		int denom;
		num = (numerator*other.numerator);
		denom = (denominator*other.denominator);
		Fraction newFrac(num , denom);
		newFrac.simplify();
		return newFrac;
	}

	bool operator==(Fraction const &other) const
	{
		if(numerator==other.numerator && denominator==other.denominator)
			return true;
		else
			return false;
	}

	Fraction& operator++()
	{
		numerator = numerator + denominator;
		simplify();
		return *this;
	}

	Fraction operator++(int)					//Post increment operator
	{
		Fraction newFrac(numerator,denominator);
		numerator = numerator + denominator;
		simplify();
		newFrac.simplify();
		return newFrac;
	}

	Fraction& operator+=(Fraction &other)					//Post increment operator
	{
		numerator = (numerator*other.denominator) + (denominator*other.numerator);
		denominator = denominator * other.denominator;
		simplify();
		return *this;
	}
};