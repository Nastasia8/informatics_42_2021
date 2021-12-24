#include <iostream>
#include <cmath>

using namespace std;

void translation(int a)
{
    int binar = 0;
    int octal = 0;
    int hex = 0;
    int v = a, s = a;

    for (int i = 0; a > 0; i++)
    {
        binar += (a % 2) * pow(10.0, i);
        a/= 2;
    }

    for (int i = 0; v > 0; i++)
    {
        octal += (v % 8) * pow(10.0, i);
        v/= 8;
    }

    for (int i = 0; s > 0; i++)
    {
        hex += (s % 16) * pow(10.0, i);
        s/= 16;
    }
    cout << binar << endl;
    cout << octal << endl;
    cout << hex << endl;
}

int main()
{
    int a;
    cin >> a;
    while (a < 0 || a > 325)
    {
        cin >> a;
    }

    translation(a);
}