#include <iostream>

#define PI 3.14159265 // #define задаёт символическую константу

using namespace std; // пространство имён

float a, b, c, d, h, R; // числа с плавающей точкой

int main()
{
    setlocale(LC_ALL, "RUS"); //setlocale задаёт локализацию программы

    cout << "Введите длины" << endl; // Выводится
    cin >> a >> b >> d >> c >> h >> R; // Вводится
    cout << "Периметр трапеции равен" << a + b + c + d << endl; // Выводится
    cout << "Площадь трапеции равна" << ((a + b) / 2) * h << endl;
    cout << "Периметр квадрата" << 4 * a << endl;
    cout << "Площадь квадрата" << a * a << endl;
    cout << "Периметр круга" << 2 * PI * R << endl;
    cout << "Площадь круга" << 2 * R * R << endl;

    return 0;
}
