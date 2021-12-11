#include <iostream>

using namespace std;

int sdelaet(int m) {
    int d;
    int p = 1;
    while (m != 0)
    {
        d = m % 10;
        m = m / 10;
        if (d != 0)
        {
            p*= d;
        }
    }
    return p;
}


int main() {
    int m;
    cout << " Шестизначное число ";
    cin >> m;
    if (m < 100000 || m > 999999) {
        cout << " * цифр M = " << sdelaet(m) << endl;
    }
    else
    {
        cout << "Вы ввели не шестизначное число!" << endl;
    }
    return 0;
}