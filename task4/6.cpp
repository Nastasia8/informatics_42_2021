#include <iostream>
#include <math.h>
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;

void score(int);

int main() {
SetConsoleCP(CP_UTF8);
SetConsoleOutputCP(CP_UTF8);

    long number;
    cout << "Введите шестизначное число" << endl;
    cin >> number;
    
    while (number < 100000 || number>999999) {
        cout << "Это число не подходит под условие" << endl;
        cin >> number;
    } 
     cout << "Произведение его цифр равно" << endl;
    score(number);
}

void score(int number) {
    int composition = 1;
    while (number > 0) {
        composition *= number % 10;
        number /= 10;
    }
    cout << composition;
}