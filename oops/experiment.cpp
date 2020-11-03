class Polynomial
{
    private:
    // int *degCoeff;
    int capacity;

    public:
    int *degCoeff;
    Polynomial()
    {
        degCoeff = new int[5];
        degCoeff[5] = {0};
        capacity = 5;
    }

    Polynomial(Polynomial const &p)         //Copy Constructor 
    {
        degCoeff = new int[p.capacity];
        for(int lv=0; lv<p.capacity; lv++)
        {
            degCoeff[lv] = p.degCoeff[lv];
        }
        capacity = p.capacity;
    }

    void operator=(Polynomial const &p)         //Copy Assignment
    {
        degCoeff = new int[p.capacity];
        for(int lv=0; lv<p.capacity; lv++)
        {
            degCoeff[lv] = p.degCoeff[lv];
        }
        capacity = p.capacity;
    }

    void print()                                //Print
    {
        for(int lv=0; lv<capacity; lv++)
        {
            if(degCoeff[lv] != 0)
            {
                cout<<degCoeff[lv]<<"x"<<lv<<" ";
            }
        }
        cout<<"\n";
        
    }

    void setCoefficient(int degree, int coeff)
    {
        if(degree < capacity)
        {
            degCoeff[degree] = coeff;
        }
        else
        {
            int size=2*capacity;
            while(degree>=size){
                size*=2;
            }
            int *array = new int[size];
            for(int i=0;i<size;i++){
                array[i]=0;
            }
            for(int lv=0; lv<capacity; lv++)
            {
                array[lv] = degCoeff[lv];
            }
        //  delete[] degCoeff;
            degCoeff = array;
            capacity =size;
            degCoeff[degree] = coeff;
        }
        
    }


    Polynomial operator+(Polynomial p)
    {
        Polynomial newPol;
        if(capacity > p.capacity)
            newPol = *this;
        else
            newPol = p;
        int c = min(capacity, p.capacity);
        for(int i=0; i<c; i++)
        {
            newPol.degCoeff[i] = degCoeff[i] + p.degCoeff[i];
        }
        return newPol;
    }



    Polynomial operator-(Polynomial p)
    {
        Polynomial newPol;
        if(capacity > p.capacity)
            newPol = *this;
        else{
            newPol = p;
            for(int i=0;i<p.capacity;i++){
                newPol.degCoeff[i]*=-1;
            }
        }
        int c = min(capacity, p.capacity);
        for(int i=0; i<c; i++)
        {
            newPol.degCoeff[i] = degCoeff[i] - p.degCoeff[i];
        }
        return newPol;
    }


    Polynomial operator*(Polynomial p)
    {   
        Polynomial newPol;
        newPol.capacity = capacity + p.capacity;
        newPol.degCoeff = new int[newPol.capacity];
        newPol.degCoeff[newPol.capacity] = {0};
        for(int i=0; i<capacity; i++)
        {
            for(int j=0; j<p.capacity; j++)
            {
                newPol.degCoeff[i+j] = newPol.degCoeff[i+j] + degCoeff[i] * p.degCoeff[j];
            }
        }
        return newPol;
    }
};