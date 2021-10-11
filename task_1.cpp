#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double y = 0;
    double a = -2.5;
    double b = 3.4;
    double xf[5] = { 2.80, 3.54, 5.21, 6.28, 3.48 };

    // Задание №A
    cout << "A" << endl;

    for (float x = 3.5; x <= 6.5; x += 0.6)
    {
        if (x > 5)
        {
            y = (pow(log10((pow(a, 2) + x)), 2)) / (pow((a + x), 2));
        }
        else if (x <= 5)
        {
            y = (pow(a + (b * x), 2.5)) / 1.8 + (pow(cos(a * x), 3));
        }
        cout << " Value Y:= " << y << " by X:= " << x << endl;
    }
    cout << "---------" << endl;


    // Задание №B
    cout << "B" << endl;

    for (int i = 0; i <= 4; i++) 
    {
        if (xf[i] > 5)
        {
            y = (pow(log10((pow(a, 2) + xf[i])), 2)) / (pow((a + xf[i]), 2));
        }
        else if (xf[i] <= 5)
        {
            y = (pow(a + (b * xf[i]), 2.5)) / 1.8 + (pow(cos(a * xf[i]), 3));
        }
        cout << " Value Y:= " << y << " by X:= " << xf[i] << endl;


    }

    return 0;
}