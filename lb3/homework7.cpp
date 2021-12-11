#include <iostream>
#include <cmath>

using namespace std;

void r(int x, int y, char symb)

int main()
{
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            if (i == 0 || i == x - 1 || j == 0 || j == y - 1)
            {
                cout << symb;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int h, g;
char r;
cout << " Введите высоту: ";
cin >> h;
cout << " Введите ширину: ";
cin >> g;
cout << "Введите символ которым будет отрисован прямоугольник: ";
cin >> r;
m(h, g, r);
return 0;
}