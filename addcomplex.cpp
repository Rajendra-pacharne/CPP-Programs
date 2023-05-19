#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Complex{ float real,img;
      public: Complex(){} //zero arg constr
	      Complex(float r, float im){real=r; img=im;}  // para constr
	      Complex operator+(Complex &T);

            Complex operator*(Complex &T);
	      void show();
	      };
Complex Complex::operator+(Complex &T){ return(Complex(real+T.real,img+T.img));}


Complex Complex::operator*(Complex &T)
{                                   float r3,im3;
                                        r3=(real*T.real)-(img*T.img);
                                        im3=(real*T.img)+(img*T.real);
                                     return(Complex(r3,im3));
}



void Complex::show()
{ cout<<"\n "<<""<<"Complex No: "<<real<<"+"<<img<<"i";}


int main()
{
    
     Complex C1(3.3,4.4),C2(1.1,1.1),C3;
 C3=C1+C2;
cout<<"\n The addition of two complex number is =";
C3.show();


// multiplication 
//..........................................-----------------------
// C3=C1*C2;
// cout<<"\n The Multiplication of two complex number is =";
// C3.show();

}



