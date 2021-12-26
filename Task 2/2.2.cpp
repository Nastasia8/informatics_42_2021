#include <iostream>
#include <cmath>

using namespace std;

void circle(int, int R, double PI)
{
    cout << "Периметр круга = " << 2 * PI * R << endl;

    cout << "Площадь груга = " << PI * R * R << endl;
}

int main()

{
    setlocale(LC_ALL, "RUSSIAN");

    int R;
    const double PI = 3.141592653589793;

    cout << "Введите переменную для круга:  ";

    cin >> R;

    circle(2, R, PI);
}