#include <iostream>
using namespace std;

class base
{
    public:
    base()
    {
        cout<<"\n base constructor";
    }
    const char *dxdx()
    {
        return "User defined exception raised.... ";
    }
    void showbase(int x)
    {   int a=x;
        try
        {
            if (a>18)
            {
                cout<<"\n u r allowed";
            }
            else
            {

                throw a;
            }
        }
        catch(base dx)
        {
            cout << dx.dxdx();
        }
         
        cout<<"\n show base";
    }
};
class derived : public base
{   public:
    // derived()
    // {
    //     cout<<"\n derived constructor";
    // }
    void show_d()
    {
        cout<<"\n show derived";
    }
};
int main(void)
{
    derived d1;
    d1.showbase(17);
    d1.show_d();
    return 0;

}