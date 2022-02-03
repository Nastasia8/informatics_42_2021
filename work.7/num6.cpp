#include <iostream>
#include <math.h>

using namespace std; // пространство имён

int calc(int h)
{
    int i;
    int a = 1;
    for (i = 1; i <= h; i++)
    {
        a *= i;
    };
    return a;
}

int main()
{
    int r, a, y;
    int t = 0;

    cin >> r; // количество

    cout << "1" << endl;

    for (a = 1; a <= r; a++)
    {
        for (y = 0; y <= a; y++)
        {
            cout << (calc(a) / (calc(y) * calc(a - y))) << " ";
        }
        cout << " " << endl;
    }
    return 0;
}