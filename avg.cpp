#include<iostream>

using namespace std;

int main()
{
    int n;
    int  fact = 1;

    cout << "Enter number ";
    cin >> n;

    for(int i = 1; i <=n; ++i)
    {
        fact *= i;
    }

    cout << "Factorial of " << n << fact;    
    
    int v1,v2,v3,v4,v5;
    cout <<"enter 5 values";
    cin>>v1>>v2>>v3>>v4>>v5;
    int avg = (v1+v2+v3+v4+v5)/5;
    cout<<"avg=="<<avg;
    return 0;
    
}

