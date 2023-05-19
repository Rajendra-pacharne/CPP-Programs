#include<iostream>
using namespace std;
class student;
class person{
    int pid;
    public: 
    person(){}
    person(int x){ pid=x;}
          void show(){cout<<"\n person id ="<<pid; }
         // friend void swap(AA &, BB&);
          };
class student:public person
{
    int roll;
    public:
    student(){}
    student(int y)
        { 
        roll=y;
        }
    void sshow()
    {
      cout<<"\n student roll no ="<<roll;   
    }
};
int main()
{
    student obj1(7); person obj2(77);
    obj1.show(); obj2.show();
// swap(obj1,obj2);
// obj1.show(); obj2.show();
    return 0;
}
