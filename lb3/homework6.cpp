#include <iostream>

using namespace std;

int funksion(int n) 
{
    int k;
    int m = 1;
    while (n != 0)
    {
        k = n % 10;
        n = n / 10;
        if (s != 0)
        {
            m *= k;
        }
    }
    return m;
}

int main() {
    int n;
    cout << "Введите шестизначное число: ";
    cin >> n;
    if (n < 100000 || n > 999999) 
    {
        cout << "Произведение цифр числа N = " << funksion(n) << endl;
    }
    else
    {
        cout << "Вы ввели не шестизначное число" << endl;
    }
    return 0;
}