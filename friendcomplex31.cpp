#include<iostream>
using namespace std;

class Complex
{
    private:
	int real, imag;
    public:
	Complex(int r = 0, int i =0)
	{
    real = r; imag = i; }
    void show(void){ cout<<"\n Complex no is : "<<real<<" + "<<	imag<<"i"; }
    Complex operator +(const Complex &);
	Complex operator -(const Complex &);
    Complex operator *(const Complex &);
    Complex operator /(const Complex &);

    friend ostream & operator << (ostream &out, const Complex &c);
	friend istream & operator >> (istream &in, Complex &c);
};

Complex Complex:: operator +(const Complex &T)
{ return (Complex(real+T.real,imag+T.imag));}

Complex Complex:: operator -(const Complex &T)
{ return (Complex(real-T.real,imag-T.imag));}

Complex Complex:: operator *(const Complex &T)
{ return (Complex(real*T.real,imag*T.imag));}

Complex Complex:: operator /(const Complex &T)
{ return (Complex(real/T.real,imag/T.imag));}

ostream & operator << (ostream &out, const Complex &c)
{ out<<"\n Complex no is : "<<c.real<<" + "<<	c.imag<<"i"; 
return out;
}

istream & operator >> (istream &in, Complex &c)
    { cout<<"\n Enter Real Part: "; in>>c.real;
      cout<<"\n Enter img Part: "; in>>c.imag;
    return in;
    }

int main()
{
     Complex C1,C2,C3;
    cin>>C1;
    cin>>C2; // overloading input opr >>
    C1.show();
    cout<<C1;  // overloading output opr <<
    cout<<"\n-----------------------------------------------------------------";
    cout<<C2;
    cout<<"\n----------Addition-----------------------------------";
    C3=C1+C2;
    cout<<C3;

    cout<<"\n----------Subtraction-----------------------------------";
    C3=C1-C2;
    cout<<C3;
    
    cout<<"\n----------Multiplication-----------------------------------";
    C3=C1*C2;
    cout<<C3;

    cout<<"\n----------Division-----------------------------------";
    C3=C1/C2;
    cout<<C3;

    return 0;
}
