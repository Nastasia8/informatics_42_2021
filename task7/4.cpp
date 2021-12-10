#include <iostream>
#include <windows.h>
using std:: cout;
using std:: endl;
using std:: cin;

float factorial (int);

int main () {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    int n, s = 0;
    cout << "Введите число = ";
    cin >> n;
    for(int k = 1; k <= n; k++)
    {
        s += (-1) * k * ((5 - k) / factorial(k));
    }
    cout << "Сумма = " << s << endl;;

    return 0;
}

float factorial (int k) {
    
    if (k == 0) 
        return 1; 
    else
        return k * factorial(k - 1);
    
}