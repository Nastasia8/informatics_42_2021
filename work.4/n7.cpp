#include <iostream>
#include <cmath>

using namespace std; // пространство имён

void z(int x, int y, char q) // void не возвращает значения (присв. типы)

int main()
{
    for (int c = 0; c < x; c++) // цикл
    {
        for (int m = 0; m < y; m++) // цикл
        {
            if (c == 0 || c == x - 1 || m == 0 || m == y - 1) // если, то
            {
                cout << q;
            }
            else // иначе
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    int h, a; // h - высота, a - ширина
    char q; // отрисовка
    cout << " Введите высоту: "; // вывод 
    cin >> h;
    cout << " Введите ширину: ";
    cin >> a;
    cout << "Введите символ которым будет отрисован прямоугольник: ";
    cin >> q;
    z(h, a, q);
    return 0;

}
