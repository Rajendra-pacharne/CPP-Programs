#include <iostream>
using namespace std;
class Derived;
class Base
{
    int num1;

    public:
    Base()
    {
        num1 = 10;
    }
    void show()
    {
        cout << "\n Value of Number 1 in Base class  : " << num1;
    }
    friend void swap(Base *num1, Derived *num2);
};

class Derived : public Base
{
    int num2;

    public:
    Derived()
    {
        num2 = 20;
    }
    void show()
    {
        cout << "\n Value of Number 2 in Derived class  : " << num2;
    }
    friend void swap(Base *num1, Derived *num2);
};

void swap(Base *no1, Derived *no2)
{
    int no3;
    no3 = no1->num1;
    no1->num1 = no2->num2;
    no2->num2 = no3;
}
int main()
{
    Base b;
    Derived d;
    b.show();
    d.show();
    swap(&b, &d);
    cout << "\n After swap :";
    b.show();
    d.show();
    return 0;
}
