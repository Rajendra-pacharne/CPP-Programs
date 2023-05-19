#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Complex
{ float real,img;
      public: Complex(){cout<<"cggfhggg";} //zero arg constr
	          Complex(float r, float im){real=r; img=im;}  // para constr
	          Complex operator+(Complex &T);

              Complex operator*(Complex &T);
	          void show();
              void getdata();
              void showdata();
              void add();
              void sb();




};


int menu(void)
{ 
   
    int n;

    cout<<"\n             **************************            ";
    cout<<"\n                    Main Menu";
    cout<<"\n             --------------------------";
    cout<<"\n             1. Addition";
    cout<<"\n             2. Subtraction";
    cout<<"\n             3. Multiplication";
    cout<<"\n             4. Division";
    cout<<"\n             5. exit";
    cout<<"\n             --------------------------";
    cout<<"\n Enter Your Choice: "; cin>>n; return n;
}

//get numbers from user .............
void getdata(){};


//show the result 
void Complex::showdata()
{
     cout<<"\n "<<""<<"Complex No: "<<real<<"+"<<img<<"i";
}


Complex Complex::operator+(Complex &T){ return(Complex(real+T.real,img+T.img));}

void Complex::add()
{
    
 // Complex Complex::operator+(Complex &T){ return(Complex(real+T.real,img+T.img));}

   

}
void sb(){};
int main(void)
{    
     
 

      int ch;
    do{ ch=menu();
    switch(ch)
    {
        
//  C3=C1+C2;
// cout<<"\n The addition of two complex number is =";
// C3.show();



// C3=C1*C2;
// cout<<"\n The Multiplication of two complex number is =";
// C3.show();



        case 1: 
         Complex c3;
        Complex C1(3.3,4.4),C2(1.1,1.1);
        C3=C1+C2;
        cout<<"\n The addition of two complex number is ="; 
        c3.add();
        c3.showdata(); 
        break;
        
        
        
      //  case 2: sb(); getdata(); break;
        
    }
    
    
    cout<<"\n Enter Y to continue:    ";
    char y;
    cin>>y;
    }while (ch='y');

     
    return 0;
}
