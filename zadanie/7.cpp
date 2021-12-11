#include <iostream>
#include <cmath>

using namespace std;

void z(int x, int y, char q)
    
int main()
{
    for (int c = 0; c < x; c++)
    {
        for (int m = 0; m < y; m++)
        {
            if (c == 0 || c == x - 1 || m == 0 || m == y - 1)
            {
                cout << q;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    int h, a; // h - высота, a - ширина
    char q; // отрисовка
    cout << " Введите высоту: ";
    cin >> h;
    cout << " Введите ширину: ";
    cin >> a;
    cout << "Введите символ которым будет отрисован прямоугольник: ";
    cin >> q;
    z( h, a, q );
    return 0;
}