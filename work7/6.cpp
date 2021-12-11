#include <iostream>
#include <math.h>
using namespace std;

int calc(int h)
{
    int i;
    int x = 1;
    for (i = 1; i <= h; i++)
    {
        x *= i;
    };

    return x;
}

int main()
{
    int r, x, y;
    int t = 0;

    cin >> r; //кол-во

    cout << "1" << endl;
    for (x = 1; x <= r; x++)
    {
        for (y = 0; y <= x; y++)
        {
            cout << (calc(x) / (calc(y) * calc(x - y))) << " ";

        }

        cout << " " << endl;
    }
    return 0;
}