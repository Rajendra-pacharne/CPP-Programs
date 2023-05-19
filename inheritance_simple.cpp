#include <iostream>  
using namespace std;  
class base
{
    public:
    void set()
    {
        cout<<"\n Grand parent ===> 1:: base class -->> set function ";
    }
};
class base1
{
    public:
    void set3()
    {
        cout<<"\n Grand parent ===> 2:: base1 class -->> set3 function ";
    }
};

class child : public base ,public base1
{
    public:
    void set1()
    {
        cout<<"\n parent       ===> 3:: child class -->> set1 function ";
    }
};
class belowchild : public child
{
    public:
    void set4()
    {
        cout<<"\n last child   ===> 4::  belowchild class -->> set4 function ";
    }
};


int main(void)
{
    belowchild c1;
    c1.set();
    c1.set3();
    c1.set1();
    c1.set4();
    

}