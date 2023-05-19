#include<iostream>
using namespace std;
class employee 
{
                 char name[10];
                 int age,salary;
                public: 
                void getdata(void);
                void showdata(void);
                
};
 void employee ::getdata(void)
 {
                              cout<<"\n Enter name : "; cin>>name;
                              cout<<"\n Enter age : "; cin>>age;
                              cout<<"\n Enter salary: "; cin>>salary;
 } 
                            
void employee ::showdata(void)
{
    cout<<"\n"<<name <<"\t \t"<<age<<"\t \t"<<salary;
}
                
int main()
{ 
    employee  emp[5];
 
 for(int i=0;i<5;i++) emp[i].getdata();
 cout<<"\n----------------------------------------------------------------";
 cout<<"\n Employee Name     Age             Salary";
 cout<<"\n----------------------------------------------------------------";
 
    for(int i=0;i<5;i++) emp[i].showdata();
    return 0;
}


