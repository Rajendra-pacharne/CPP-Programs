#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "main block start";
    cout << "\n enter age";
    cin >> age;
    try
    {
        if (age <= 18)
        {
            throw("not allowed");
        }
        else
        {
            throw age;
        }
    }

    catch (const char *a1)
    {
        cout << "U R : " << a1;
    }
    catch (int ncb)
    {
        cout << "You are allowed\n"
             << ncb;
    }
    return 0;
}