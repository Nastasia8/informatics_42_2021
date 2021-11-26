#include <iostream>
#include <cmath>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;

int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    int a, b, c;
    cout << "Введите три числа " << endl;
    cin >> a >> b >> c;
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            cout << "Наибольший общий делитель (" << a  << "; " << b << "; " << c << ") = " << i;
            break;
        }
    }
    return 0;
}


