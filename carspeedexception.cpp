#include <iostream>
#include <exception>
using namespace std;

class OverSpeed : public exception
{
    int speed;

public:
    const char *what()
    {
        return "check out ur car speed you are in the car not in an aeroplane ";
    }
};

int main()
{
    int carspeed = 0;
    int drvtype; // 1  for expert 2 for skilled 3 for trainee
    OverSpeed s;
    try
    {
        cout << "\n Enter Driver type :";
        cin >> drvtype;
        while (1)
        {
            carspeed += 10;
            if (carspeed > 50 && drvtype == 3)
                throw s;

            if (carspeed > 100 && drvtype == 2)
                throw s;

            if (carspeed > 120 && drvtype == 1)
                throw s;

            cout << "Carspeed: " << carspeed << endl;
        }
    }
    catch (OverSpeed ex)
    {
        cout << ex.what();
    }

    return 0;
}
