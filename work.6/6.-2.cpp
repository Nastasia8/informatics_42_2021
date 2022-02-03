#include <iostream>
#include <cmath>

using namespace std; // пространство имён

void translation(int x) // void не возвращает значения
{
    int binar = 0; // тип int
    int octal = 0;
    int hex = 0;
    int v = x, s = x;

    for (int i = 0; x > 0; i++) // в начале i = 0 и пока x > 0, к i прибавляется 1 и выполняется пустой оператор 
    {
        binar += (x % 2) * pow(10.0, i);
        x /= 2;
    }

    for (int i = 0; v > 0; i++)
    {
        octal += (v % 8) * pow(10.0, i);
        v /= 8;
    }

    for (int i = 0; s > 0; i++) // в начале i = 0 и пока s > 0, к i прибавляется 1 и выполняется пустой оператор 
    {
        hex += (s % 16) * pow(10.0, i);
        s /= 16;
    }
    cout << binar << endl;
    cout << octal << endl; // вывод
    cout << hex << endl;
}

int main()
{
    int x;
    cin >> x;
    while (x < 0 || x > 325) // цикл
    {
        cin >> x; 
    }
    translation(x);
}
