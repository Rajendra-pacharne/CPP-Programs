#include <iostream>
#include <exception>
using namespace std;

class Person : public exception
{

public:
    int age;
    int income;
    bool veh, metro;
    const char *what()
    {
        return "User defined exception raised.... ";
    }
};

int main()
{
    Person P;
    try
    {
        cout << "\n Enter Age :";
        cin >> P.age;
        cout << "\n Enter Income:";
        cin >> P.income;
        cout << "\n Are you from Metro City  enter  1/0";
        cin >> P.metro;
        cout << "\n Do you own 4 wheealer 1/0 ";
        cin >> P.veh;

        if (P.age < 18 || P.age > 55)
        {
            cout << "Age is not in the valid range";
            throw P;
        }

        if (P.income < 50000 || P.income > 100000)
        {
            cout << " Income is not in the valid range";
            throw P;
        }

        if (!P.metro)
        {
            cout << "\n User is not from Metro ";
            throw P;
        }
        if (!P.veh)
        {
            cout << "\n User is not owning 4wheeler ";
            throw P;
        }
        cout << "Valid data " << endl;
    }
    catch (Person ex)
    {
        cout << ex.what();
    }

    return 0;
}
