﻿#include <iostream>
#include <cmath>

using namespace std; // пространство имён

void calc(int op, int x, int y) // void не возвращает значения
{
    if (op == 1) // если, то
    {
        cout << "Summ = " << x + y << endl; // вывод
    }
    else if (op == 2) // иначе
    {
        cout << "Minus = " << x - y << endl;
    }
    else if (op == 3) 
    {
        cout << "Umn = " << x * y << endl;
    }
    else if (op == 4) 
    {
        cout << "Del = " << x / y << endl;
    }
    else if (op == 5) 
    {
        cout << "Vos = " << pow(x, y) << endl;
    }
    else 
    {
        cout << "This operation does not exist" << endl;
    }
}

int main()
{
    int op, x, y; // инициализ. как тип int
    cout << "1 - sum" << endl;; // вывод
    cout << "2 - minus" << endl;
    cout << "3 - umn" << endl;
    cout << "4 - del" << endl;
    cout << "5 - vos" << endl;
    cout << "Nomer operacii =";
    cin >> op >> x >> y; // ввод

    calc(op, x, y);

}