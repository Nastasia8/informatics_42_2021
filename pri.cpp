
#include <iostream>

#define PI 3.14159265

using namespace std;

float a, b, c, d, h, R;

int main()
{
    setlocale(LC_ALL, "RUS");

    cout << "Введите длины" << endl;
    cin >> a >> b >>d>>c>>h>>R;
    cout << "Периметр трапеции равен" << a + b + c + d << endl;
    cout << "Площадь трапеции равна" << ((a + b) / 2) * h << endl;
    cout << "Периметр квадрата" << 4 * a << endl;
    cout << "Площадь квадрата" << a * a << endl;
    cout << "Периметр круга" << 2 * PI * R << endl;
    cout << "Площадь круга" << 2 * R * R << endl;

    return 0;
};

