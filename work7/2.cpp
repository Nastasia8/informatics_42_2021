#include <iostream>
#include <cmath>

using namespace std;

int main() 
{

    char s;
    int t;
    int i, x, k;

    cin >> t;

    if (t < 0) 
    {
        exit(0);
    }

    cin >> s;

    cout << "1) " << endl;

    for (i = 0; i < t; i++) {
        for (x = (i + 1); x > 0; x--) {
            cout << s;
        }
        cout << endl;
    }
    cout << endl;

    for (i = t; i > 0; i--)
    {
        for (x = i; x > 0; x--) 
        {
            cout << s;
        }
        cout << endl;
    }
    cout << endl;

    for (i = t; i > 0; i--)
    {
        for (x = i; x > 0; x--)
        {
            cout << " ";
        }
        for (k = t - i; k > 0; k--)
        {
            cout << s;
        }
        cout << endl;
    }
    cout << endl;

    for (i = 0; i < t; i++) 
    {
        for (x = i; x > 0; x--) 
        {
            cout << " ";
        }
        for (k = t - i; k > 0; k--)
        {
            cout << s;
        }
        cout << endl;
    }
    cout << endl;

    cout << " 2) " << endl;

    i = 0;
    while (i < t) 
    {
        x = i + 1;
        while (x > 0) 
        {
            cout << s;
            x--;
        }
        cout << endl;
        i++;
    }
    cout << endl;

    i = t;
    while (i > 0) 
    {
        x = i;
        while (x > 0) 
        {
            cout << s;
            x--;
        }
        cout << endl;
        i--;
    }

    i = 0;
    while (i <= t) 
    {
        k = i;
        x = t - k;
        while (k < t) 
        {
            cout << " ";
            k++;
        }
        while (x < t) {
            cout << s;
            x++;
        }
        cout << endl;
        i++;
    }

    cout << endl;

    i = t;
    while (i >= 0) 
    {
        k = i;
        x = t - k;
        while (k < t)
        {
            cout << " ";
            k++;
        }
        while (x < t) 
        {
            cout << s;
            x++;
        }
        cout << endl;
        i--;
    }

    return 0;
}