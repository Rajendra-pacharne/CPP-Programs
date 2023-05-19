#include <iostream>
using namespace std;
double power(double, int = 2);
int main()
{
    int p;
    double n, r;
    cout << "Enter the number ";
    cin >> n;
    cout << "Enter the exponent ";
    cin >> p;
    r = power(n, p);
    cout << "Result is " << r;
    r = power(n);
    cout << "\nResult without passing exponent " << r;
    return 0;
}
double power(double a, int b)
{
    double x = 1;
    for (int i = 1; i <= b; i++)
    {
        x = x * a;
    }
    return x;
}
