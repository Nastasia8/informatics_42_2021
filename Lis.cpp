#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    const float a = 7.2;
    const float b = 1.3;

    int i = 0;
    int select;

    double c[i] = { 2.4, 2.8, 3.9, 4.7, 3.16 };
    double g;
    double y;

    float Xn = 1.56;
    float Xk = 4.71;
    float dX = 0.63;

    cout << "select task type 1 or 2" <<endl;
    cin >> select;

    switch(select)
    {
        case 1:
        {
            while(i <= 4)
            {
                y = pow(((a + b * c[i]) / pow(long(c[i]), 3)), 0.2);
                cout << "y = " << y << endl;
                i++;
            }
            break;
        }
        case 2:
        {
            while(Xn <= Xk)
            {
                g = pow(((a + b * Xn) / pow(long(Xn), 3)), 0.2);
                cout << "g = " << g << endl;
                Xn = Xn + dX;
            }
            break;
        }
    }
    return 0;
}