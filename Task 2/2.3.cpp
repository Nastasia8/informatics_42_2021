#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");

    int side, area, perimeter;

    cout << "Сторона квадрата: ";
    cin >> side;
 

    area = side * side;
    perimeter = (side + side) * 2;

    cout << "Площадь квадрата: " << area << endl;
    cout << "Периметр квадрата: " << perimeter << endl;

    return 0;
}