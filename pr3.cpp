#include <iostream>
using namespace std;
int main()
{
    int pass = 0, fail = 0, count = 1, r;
    while (count <= 10)
    {
        cout << "Enter result(pass-->1, fail-->2): ";
        cin >> r;
        if (r == 1)
        {
            pass = pass + 1;
        }
        else
        {
            fail = fail + 1;
        }
       count ++;
    }
    cout << "Passed: " << pass;
    cout << "\nFailed: " << fail;
    if (pass > 8)
    {
        cout << "\nRaised Tuition.....";
    }
    return 0;
}
