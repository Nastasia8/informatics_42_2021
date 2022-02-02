#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std; // пространство имён

int main()
{
    SetConsoleCP(CP_UTF8); // функция SetConsoleCP устанавливает кодовую страницу ввода, используемую консолью
    SetConsoleOutputCP(CP_UTF8); // // функция SetConsoleCP устанавливает кодовую страницу данных, используемую консолью
    int a; // инициализ. как тип int
    int b;
    int sum = 0;
    cout << "введите начало"; // вывод
    cin >> a; // ввод
    cout << "введите конец";
    cin >> b;

    while (a <= b) // цикл
    {
        sum += (a % 2 == 0) ? a : 0; //если a % 2 == 0 - истинно, то a, в противном случае 0 (оператор "?")
        a += 1;
    }
    cout << "сумма=" << sum << endl; // вывод
    return 0;
}